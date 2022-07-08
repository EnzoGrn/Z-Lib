/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strtoupper
*/

#include <zlib/zstring.h>

char *zstrtoupper(char *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        str[i] = ztoupper(str[i]);
    }
    return str;
}
