# Created by Korolyov Nikita on 28.08.2020
# https://github.com/KorolyovNikita

from cmsis_svd.parser import SVDParser

import argparse
import os
import re

import devclass
import yes_no
import headerscreater


def create_mapfiles(device):
    def reg_description(reg):
        result = '    # ' + ('-' * 73) + '\n'
        result += f'    # {reg.name}\t({reg.description})\n'
        result += f'    # Offset: {reg.address_offset}\tSize: {reg.size}\t'
        result += f'Access: {reg.access}\n'
        result += '    # ' + ('-' * 73) + '\n'
        return result

    if not os.path.isdir('valuesmap'):
        os.mkdir('valuesmap')

    for periph in device:
        with open(f'valuesmap/{periph.name}.py', 'w') as file:
            file.write('from tempvalue import*\n\n\n')
            file.write(f'def apply({periph.name}):\n')
            for reg in periph:
                file.write(reg_description(reg))
                for field in reg:
                    file.write(f"\
    {periph.name}['{reg.name}']['{field.name}'].values = None\n")
                file.write('\n')

    with open('valuesmap/__init__.py', 'w') as file:
        tmp = ''
        for p in device:
            tmp += f'from .import {p.name}\n'
        file.write(tmp)
        tmp = '\n\ndef apply(device):\n'
        for p in device:
            tmp += f"    {p.name}.apply(device['{p.name}'])\n"
        file.write(tmp)


def create_fixfile(device):
    with open('fixscript.py', 'w') as file:
        file.write('def apply(device):\n')
        for p in device:
            if len(p.peripherals) > 1:
                file.write(f"    # device['{p.name}'].rename('new')\n")
        file.write('    pass')


def main():
    arg_parser = argparse.ArgumentParser()
    arg_parser.add_argument('input_file', type=str, help='input SVD file')
    arg_parser.add_argument('-p',
                            metavar='PERIPHERAL',
                            help='generate code only for specified peripheral')
    arg_parser.add_argument('-s',
                            metavar='SAVEPATH',
                            help='save path for generated registers')
    args = arg_parser.parse_args()

    parser = SVDParser.for_xml_file(args.input_file)
    device = devclass.Device(parser.get_device())

    try:
        import fixscript
        fixscript.apply(device)
    except ImportError:
        print('fixfile.py not found, a new one will be created.')
        create_fixfile(device)

    try:
        import valuesmap
        valuesmap.apply(device)
    except ImportError:
        print('valuesmap import ERROR')
        print('New files will be created, old ones will be erased')
        if (yes_no.query('Continue?')):
            create_mapfiles(device)
            print('Please restart the script')
            return
        else:
            return

    savepath = args.s + f'/{device.name}' if args.s else f'{device.name}'

    # def remove_digital(name):
    #     newname = ''
    #     for i in name:
    #         if i.isdigit():
    #             continue
    #         newname += i
    #     return newname

    headerscreater.create(device, savepath)




if __name__ == "__main__":
    main()
