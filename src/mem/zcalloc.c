/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** mem function - calloc
*/

#include <zlib/zmem.h>
#include <stdlib.h>

void *zcalloc(ulong nmemb, ulong size)
{
    void *ptr = NULL;

    if (nmemb == 0)
        nmemb = 1;
    if (size == 0)
        size = 1;
    ptr = malloc(nmemb * size);
    if (ptr)
        zmemset(ptr, 0, nmemb * size);
    return ptr;
}
