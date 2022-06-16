/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** array function - array_len
*/

#include <zlib/zarray.h>

ulong zarrlen(char **tab)
{
    ulong size = 0;

    for (; tab[size] != NULL; size++);
    return size;
}
