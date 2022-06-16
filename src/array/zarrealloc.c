/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** array function - array_realloc
*/

#include <zlib/zarray.h>

char **zarrealloc(char **tab)
{
    ulong size = zarrlen(tab);
    char **new = malloc(sizeof(char *) * (size + 2));

    if (!new)
        return NULL;
    for (ulong pos = 0; tab[pos] != NULL; pos++)
        new[pos] = zstrdup(tab[pos]);
    new[size] = NULL;
    new[size + 1] = NULL;
    return new;
}
