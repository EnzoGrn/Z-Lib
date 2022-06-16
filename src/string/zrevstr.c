/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string function - revstr
*/

#include <zlib/zstring.h>

char *zrevstr(char *str)
{
    ulong pos_str = 0;
    ulong len = zstrlen(str);
    char temp;

    for (; pos_str < len; pos_str++) {
        temp = str[pos_str];
        str[pos_str] = str[len];
        str[len] = temp;
        len--;
    }
    return str;
}
