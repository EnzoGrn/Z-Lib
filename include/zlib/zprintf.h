/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** printf functions - header
*/

#ifndef ZPRINTF_H_
    #define ZPRINTF_H_

    #include <stdarg.h>
    #include <zlib/zctype.h>

int apply_flag(char const *str, char flag, va_list ap, uint *i);
void print_char(va_list ap);
void print_str(va_list ap);
void print_nbr(va_list ap);
void print_point(va_list ap);
void print_uns(va_list ap);
void print_octal(va_list ap);
void print_hexa_low(va_list ap);
void print_hexa_up(va_list ap);
void print_bin(va_list ap);
void print_special(va_list ap);
void print_modulo(va_list ap);
int zprintf(char const *str, ...);
void put_in_octal(int ascii);
int my_convert_octal(int nbr);

struct conversion_specifiers {
    char flag[3];
    void (*fn)(va_list);
};

extern const struct conversion_specifiers CONV_SPE[];

#endif /* !ZPRINTF_H_ */
