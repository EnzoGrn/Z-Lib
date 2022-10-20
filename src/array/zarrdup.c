/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** array function - array_dup
*/

#include <zlib/zarray.h>
#include <zlib/zstring.h>
#include <stdlib.h>

char **zarrdup(char **tab)
{
    ulong size = zarrlen(tab);
    char **new = malloc(sizeof(char *) * (size + 1));

    if (!new)
        return NULL;
    for (ulong pos = 0; tab[pos]; pos++)
        new[pos] = zstrdup(tab[pos]);
    new[size] = NULL;
    return new;
}
