/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strtolower
*/

#include <zlib/zstring.h>

char *zstrtolower(char *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        str[i] = ztolower(str[i]);
    }
    return str;}
