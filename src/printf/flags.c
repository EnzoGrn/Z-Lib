/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** print function - printf
*/

#include <zlib/zprintf.h>

const struct conversion_specifiers CONV_SPE[] = {
    {{'c', 0}, &print_char},
    {{'s', 0}, &print_str},
    {{'i', 'd', 0}, &print_nbr},
    {{'p', 0}, &print_point},
    {{'x', 0}, &print_hexa_low},
    {{'X', 0}, &print_hexa_up},
    {{'b', 0}, &print_bin},
    {{'o', 0}, &print_octal},
    {{'S', 0}, &print_special},
    {{'%', 0}, &print_modulo},
    {{'u', 0}, &print_uns},
};
