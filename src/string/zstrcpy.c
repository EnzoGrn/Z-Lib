/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strcpy
*/

#include <zlib/zstring.h>

char *zstrcpy(char *dest, char const *src)
{
    ulong pos = 0;

    for (; src[pos] != '\0'; pos++)
        dest[pos] = src[pos];
    dest[pos] = '\0';
    return dest;
}
