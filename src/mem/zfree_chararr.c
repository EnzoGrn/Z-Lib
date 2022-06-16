/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** mem function - free_char_array
*/

#include <zlib/zctype.h>
#include <stdlib.h>

void zfree_chararr(char **tab)
{
    if (!tab)
        return;
    for (unsigned int pos = 0; tab[pos] != NULL; pos++)
        free(tab[pos]);
    free(tab);
}
