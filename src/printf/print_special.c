/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** print function - printf
*/

#include <zlib/zwrite.h>
#include <zlib/zprintf.h>
#include <stdarg.h>

void print_modulo(va_list ap)
{
    (void)ap;
    zputchar('%');
}

void print_special(va_list ap)
{
    char *str = va_arg(ap, char *);

    for (uint i = 0; str[i] != '\0'; i++) {
        if (str[i] >= ' ' && str[i] <= 126)
            zputchar(str[i]);
        else
            put_in_octal(my_convert_octal((int)str[i]));
    }
}
