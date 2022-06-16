/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strdup
*/

#include <zlib/zstring.h>
#include <stdlib.h>

char *zstrdup(char const *src)
{
    char *new = malloc(sizeof(char) * (zstrlen(src) + 1));

    if (!new)
        return NULL;
    return zstrcpy(new, src);
}
