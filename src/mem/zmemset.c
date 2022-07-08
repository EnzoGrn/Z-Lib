/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - memset
*/

#include <zlib/zstring.h>

void *zmemset(void *s, int c, ulong size)
{
    uchar *ptr = s;

    while (size-- > 0)
        *ptr++ = c;
    return s;
}
