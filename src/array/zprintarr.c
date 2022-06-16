/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** array function - print_array
*/

#include <zlib/zarray.h>

void zprintarr(char **tab)
{
    for (unsigned int pos = 0; tab[pos] != 0; pos++) {
        zputstr(tab[pos]);
        zputchar('\n');
    }
}
