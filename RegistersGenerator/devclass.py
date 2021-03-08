# Created by Korolyov Nikita on 28.08.2020
# https://github.com/KorolyovNikita

from copy import copy

access_mode = {
    'read-only': 'ReadMode',
    'write-only': 'WriteMode',
    'write': 'WriteMode',
    'read-write': 'ReadWriteMode',
    'writeOnce': 'WriteMode',
    'read-WriteOnce': 'ReadWriteMode',
    None: 'ReadWriteMode'
}
reg_type = {
    8: 'uint8_t',
    16: 'uint16_t',
    32: 'uint32_t',
    64: 'uint64_t',
}


class Field:
    def __init__(self, raw_field, register):
        self.name = (raw_field.name if raw_field.name != register.name
                     else '_' + raw_field.name)
        self.bit_offset = raw_field.bit_offset
        self.bit_width = raw_field.bit_width
        self.access = (access_mode[raw_field.access],
                       register.access)[raw_field.access is None]

        self.isTemplate = False

        self.description = ' '.join(raw_field.description.split())
        self.values = []


class LargeRegister:
    def __init__(self, name, register, values, number_of_fields, 
                 reg_step_offset, step_rules):
        self.name = name
        self.reg = register
        self.reg_step_offset = (reg_step_offset if reg_step_offset
                                else register.size // 8)

        self.field = register[list(register.fields)[0]]
        self.values = values

        self.step_rules = step_rules
        if number_of_fields:
            self.number_of_fields = number_of_fields
            self.bit_width = register.size // number_of_fields
        else:
            self.number_of_fields = len(register.fields)
            self.bit_width = self.field.bit_width


class Register:
    def __init__(self, raw_register):
        self.name = raw_register.name
        self.address_offset = raw_register.address_offset
        self.size = raw_register._size
        self.valuetype = reg_type[self.size]
        self.access = access_mode[raw_register._access]
        self.description = ' '.join(raw_register.description.split())
        self.resetValue = raw_register._reset_value

        self.isTemplate = False

        self.fields = {}
        for f in raw_register._fields:
            if f is not None:
                self.fields[f.name] = Field(f, self)

    def __getitem__(self, key):
        return self.fields[key]

    def __iter__(self):
        for field in sorted(self.fields.values(),
                            key=lambda x: x.bit_offset, reverse=True):
            yield field

    def add(self, values):
        class methods:
            def __init__(self, reg, values):
                self.reg = reg
                self.values = values

            def to_all_fields(self):
                for field in self.reg:
                    field.values = self.values

            def to(self, field_keys):
                for key in field_keys:
                    self.reg.fields[key].values = self.values

        return methods(self, values)

    def fields_concat(self, fieldslist, newname):
        first = fieldslist[0]
        self[first].name = newname
        for key in fieldslist[1:]:
            self[first].bit_offset = min(self[first].bit_offset,
                                         self[key].bit_offset)
            self[first].bit_width += self[key].bit_width
            del self.fields[key]
        self.fields[newname] = self.fields.pop(first)
    
    def addTemplateField(self, name, baseField):
        self.fields[name] = copy(baseField)
        self.fields[name].name = name
        self.fields[name].isTemplate = True


class PeripheralGroups:
    def __init__(self, raw_periph, periph):
        self.name = periph.name
        self.access = access_mode[raw_periph._access]
        self.device = periph.device
        self.description = ' '.join(raw_periph._description.split())

        self.peripherals = []
        self.peripherals.append(periph)

        self.largeRegs = {}
        self.registers = {}
        for reg in raw_periph._registers:
            self.registers[reg.name] = Register(reg)
        periph.registers = self.registers

    def transfer_to(self, newplace):
        newplace.peripherals += self.peripherals
        del self.device.periphgroups[self.name]

    def rename(self, newname):
        p = self.device.periphgroups
        p[newname] = p.pop(self.name)
        self.name = newname

    def addLargeReg(self, name, register, values=None, number_of_fields=None, 
                    reg_step_offset=None, step_rules=None):
        self.largeRegs[name] = LargeRegister(name, register, values, number_of_fields, 
                                             reg_step_offset, step_rules)

    def addTemplateReg(self, name, baseReg, reg_step_offset=None):
        self.registers[name] = copy(baseReg)
        self.registers[name].name = name
        self.registers[name].isTemplate = True
        self.registers[name].reg_step_offset = (reg_step_offset if reg_step_offset
                                                else baseReg.size // 8)

    def __getitem__(self, key):
        return self.registers[key]

    def __iter__(self):
        for reg in sorted(self.registers.values(),
                          key=lambda x: x.address_offset):
            yield reg


class Peripheral:
    def __init__(self, raw_periph, device):
        self.name = raw_periph.name
        self.base_address = raw_periph._base_address
        self.device = device

        basename = raw_periph._derived_from
        if basename:
            device[basename].peripherals.append(self)
            device[basename].name += ('_' + self.name)
            self.registers = device[basename].registers
        else:
            device.periphgroups[self.name] = PeripheralGroups(raw_periph,
                                                              self)
        device.peripherals[self.name] = self

    def __getitem__(self, key):
        return self.registers[key]

    def __iter__(self):
        for reg in sorted(self.registers.values(),
                          key=lambda x: x.address_offset):
            yield reg


class Device:
    def __init__(self, raw_device):
        self.name = raw_device.name
        self.periphgroups = {}
        self.peripherals = {}

        for periph in raw_device.peripherals:
            Peripheral(periph, self)

        # update periphgroup names
        for key in list(self.periphgroups):
            new_name = self.periphgroups[key].name
            if key != new_name:
                self.periphgroups[new_name] = self.periphgroups.pop(key)

    def __getitem__(self, key):
        return self.periphgroups[key]

    def __iter__(self):
        for p in self.periphgroups.values():
            yield p
