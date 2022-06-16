/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strncat
*/

#include <zlib/zstring.h>

char *zstrncat(char *dest, char const *src, ulong nb)
{
    ulong size = nb;
    ulong pos_src = 0;

    for (ulong pos_dest = 0; pos_dest < zstrlen(dest) + size; pos_dest++) {
        if (pos_dest >= zstrlen(dest)) {
            dest[pos_dest] = src[pos_src];
            pos_src++;
        }
    }
    return dest;
}
