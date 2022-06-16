/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** mem function - realloc
*/

#include <zlib/zstring.h>
#include <zlib/zmem.h>

void *zrealloc(void *ptr, ulong nmemb, ulong size, ulong newsize)
{
    void *newptr = NULL;

    if (!newsize) {
        zfree(ptr);
        return NULL;
    }
    if (!ptr)
        return (zcalloc(nmemb, newsize));
    newptr = zcalloc(nmemb, newsize);
    if (!newptr)
        return NULL;
    zmemcpy(newptr, ptr, size);
    if (!newptr)
        return NULL;
    zfree(ptr);
    return newptr;
}
