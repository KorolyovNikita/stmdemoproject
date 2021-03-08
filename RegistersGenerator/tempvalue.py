# Created by Korolyov Nikita on 28.08.2020
# https://github.com/KorolyovNikita

class tempvalue:
    def str(self, field, tab):
        maxval = 2 ** field.bit_width - 1
        if self.end is None:
            self.end = maxval

        if (self.start < 0 or self.start > self.end or self.end > maxval):
            raise ValueError(f'Check values for {field.name} \
({field.description})')

        tmp = tab
        tmp += 'template<auto val, class = typename std::enable_if_t<'
        tmp += f'(val >= {self.start} && val <= {self.end})>>\n'
        tmp += tab
        tmp += f'using {self.name} = FieldValue<{field.name}, val'
        if self.offset:
            tmp += f' << {self.offset}U'
        tmp += '>;\n'
        return tmp

    def __init__(self, name="Value", end=None, start=0, offset=0):
        self.end = end
        self.start = start
        self.name = name
        self.offset = offset
