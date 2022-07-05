/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** print function - printf
*/

#include <zlib/zwrite.h>
#include <stdarg.h>

void print_char(va_list ap)
{
    zputchar(va_arg(ap, int));
}

void print_str(va_list ap)
{
    zputstr(va_arg(ap, char *));
}

void print_nbr(va_list ap)
{
    zputnbr(va_arg(ap, int));
}

void print_point(va_list ap)
{
    int nbr = va_arg(ap, long);
    zputstr("0x");
    zputbase(nbr, "0123456789abcdef");
}

void print_uns(va_list ap)
{
    zputuns(va_arg(ap, int));
}
