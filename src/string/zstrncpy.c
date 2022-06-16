/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strncpy
*/

#include <zlib/zstring.h>

char *zstrncpy(char *dest, char const *src , ulong n)
{
    ulong i = 0;

    for (; i < zstrlen(src) && i < n; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}
