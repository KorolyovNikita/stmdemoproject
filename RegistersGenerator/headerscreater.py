# Created by Korolyov Nikita on 28.08.2020
# https://github.com/KorolyovNikita

import os

from tempvalue import*


def create(device, path):
    def create_file_description(periphgroup, file_name):
        result = '/' + '*' * 78 + '\n'
        result += f'* Filename : {file_name}\n'
        result += '*\n'
        result += f'* Details  : {periphgroup.description}\n'
        result += '*            This header file is auto-generated '
        result += f'for {periphgroup.device.name} device.\n'
        result += '*' * 78 + '/\n'
        return result

    def get_digital_end(str):
        result = ''
        for i in range(1, len(str)):
            if str[-i].isdigit():
                result += str[-i]
                continue
            break

        if result == '':
            return ord(str[-1]) - 65
        return int(result)

    def fill_fieldvalues(field, tab):
        if field.values:
            val = 0
            for v in field.values:
                if type(v) is tempvalue:
                    file.write(v.str(field, tab))
                    continue
                name = ''
                if type(v) is tuple:
                    name, val = v
                elif type(v) is str:
                    name = v
                if (val < 0 or val > 2 ** field.bit_width - 1):
                    raise ValueError(f'Check values for \
{field.name} ({field.description})')
                tmp = tab
                tmp += f'using {name} = FieldValue<'
                tmp += f'{field.name}, {val}U>;\n'
                val += 1
                file.write(tmp)

    if not os.path.isdir(path):
        os.mkdir(path)

    for periphgroup in device:
        file_name = f'{periphgroup.name.lower()}_registers.hpp'
        with open(f'{path}/{file_name}', 'w') as file:
            tmp = create_file_description(periphgroup, file_name)
            tmp += '#pragma once\n\n#include "fieldvalue.hpp"\n'
            file.write(tmp)

            periphNum = 0
            for periph in periphgroup.peripherals:
                periphNum += 1

                tmp = f'struct {periph.name}\n'
                tmp += '{\n'
                if (len(periphgroup.peripherals) > 1):
                    tmp += f'  \
static constexpr auto periphNum = {get_digital_end(periph.name)};\n\n'

                file.write(tmp)
                for register in periphgroup:
                    tmp = f'  // {register.description}\n'

                    if register.isTemplate:
                        tmp += '  template<auto num>\n'

                    tmp += f'  struct {register.name} : Register<'
                    tmp += '0x{:x}'.format(periph.base_address
                                           + register.address_offset)

                    if register.isTemplate:
                        tmp += f' + {register.reg_step_offset} * num'
                    tmp += f', {register.access}, '
                    tmp += '0x{:x}>\n'.format(device.peripherals[periph.name][register.name].resetValue)
                    tmp += '  {\n'

                    file.write(tmp)
                    for field in register:
                        tmp = f'    // {field.description}\n'
                        if field.isTemplate:
                            tmp += '    template<auto num>\n'
                        tmp += f'    struct {field.name} : RegisterField<'
                        tmp += f'{register.name}, '

                        tmp += (f'{field.bit_offset} + {field.bit_width} * num, '
                                if field.isTemplate
                                else f'{field.bit_offset}, ')

                        tmp += f'{field.bit_width}, {field.access}>\n'
                        tmp += '    {\n'
                        file.write(tmp)
                        
                        fill_fieldvalues(field, '      ')

                        file.write('    };\n')
                    file.write('  };\n\n')


                file.write('// Large Registers\n\n')
                for lReg in periphgroup.largeRegs.values():
                    tmp = f'  // {lReg.reg.description}\n'
                    tmp += '  template<auto num>\n'
                    tmp += f'  struct {lReg.name} : RegisterField<'
                    tmp += f'Register<'
                    tmp += '0x{:x} + '.format(periph.base_address
                                              + lReg.reg.address_offset)
                    tmp += f'{lReg.reg_step_offset} * (num / \
{lReg.number_of_fields}), {lReg.reg.access}, '
                    tmp += '0x{:x}>, '.format(register.resetValue)
                    
                    if lReg.step_rules:
                        tmp += lReg.step_rules
                    else:
                        tmp += f'{lReg.bit_width} * (num % {lReg.number_of_fields})'
                    
                    tmp += f', {lReg.bit_width}, {lReg.field.access}>\n'
                    tmp += '  {\n'
                    file.write(tmp)

                    fill_fieldvalues(lReg, '    ')

                    file.write('  };\n\n')

                file.write('};\n\n\n')



