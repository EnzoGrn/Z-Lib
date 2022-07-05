/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** print function - printf
*/

#include <zlib/zwrite.h>
#include <stdarg.h>

void print_octal(va_list ap)
{
    zputbase(va_arg(ap, int), "01234567");
}

void print_hexa_low(va_list ap)
{
    zputbase(va_arg(ap, int), "0123456789abcdef");
}

void print_hexa_up(va_list ap)
{
    zputbase(va_arg(ap, int), "0123456789ABCDEF");
}

void print_bin(va_list ap)
{
    zputbase(va_arg(ap, int), "01");
}
