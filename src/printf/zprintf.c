/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** print function - printf
*/

#include <zlib/zprintf.h>
#include <zlib/zwrite.h>

static int is_hash(char const *str, va_list ap, uint *i)
{
    (*i) += 1;
    if (str[(*i)] == 'o')
        zputchar('0');
    if (str[(*i)] == 'x')
        zputstr("0x");
    if (str[(*i)] == 'X')
        zputstr("0X");
    return apply_flag(str, str[(*i)], ap, i);
}

static int is_flag(char c)
{
    char *flag = "sdicXxbSuopf0#-+ %";

    for (int i = 0; flag[i] != '\0'; i++) {
        if (flag[i] == c)
            return 1;
    }
    return 0;
}

static void verify_flag(int j, int pos_flag, va_list ap, char flag)
{
    if (CONV_SPE[j].flag[pos_flag] == flag) {
        CONV_SPE[j].fn(ap);
    }
}

int apply_flag(char const *str, char flag, va_list ap, uint *i)
{
    if (flag == '#') {
        is_hash(str, ap, i);
    }
    for (int j = 0; j < 11; j++) {
        for (int pos_flag = 0; CONV_SPE[j].flag[pos_flag] != 0; pos_flag++) {
            verify_flag(j, pos_flag, ap, flag);
        }
    }
    return 0;
}

int zprintf(char const *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (uint i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && is_flag(str[i + 1])) {
            i++;
            apply_flag(str, str[i], ap, &i);
        } else
            zputchar(str[i]);
    }
    va_end(ap);
    return EXIT_SUCCESS;
}
