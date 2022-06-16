/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** mem function - free
*/

#include <zlib/zctype.h>
#include <stdlib.h>

void zfree(void *ptr)
{
    if (!ptr)
        return;
    free(ptr);
}
