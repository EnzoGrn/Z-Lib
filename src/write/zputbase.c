/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - put_base
*/

#include <zlib/zwrite.h>
#include <zlib/zstring.h>

void zputbase(uint nbr, char *base)
{
    int rest = 0;
    int len = 0;

    len = zstrlen(base);
    rest = nbr % len;
    nbr = (nbr - rest) / len;
    if (nbr > 0)
        zputbase(nbr, base);
    zputchar(base[rest]);
}
