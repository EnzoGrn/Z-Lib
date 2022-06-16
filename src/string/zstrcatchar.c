/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strcatchar
*/

#include <zlib/zstring.h>

char *zstrcatchar(char *dest, char const c)
{
    ulong len = 0;

    if (!dest)
        return NULL;
    len = zstrlen(dest);
    dest[len] = c;
    dest[len + 1] = '\0';
    return dest;
}
