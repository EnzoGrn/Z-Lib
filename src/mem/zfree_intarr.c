/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** mem function - free_int_array
*/

#include <zlib/zctype.h>
#include <stdlib.h>

void zfree_intarr(int **ptr, uint size)
{
    if (!ptr)
        return;
    for (uint i = 0; i < size; i++)
        free(ptr[i]);
    free(ptr);
}
