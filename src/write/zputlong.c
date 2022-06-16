/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - putlong
*/

#include <zlib/zwrite.h>

void zputlong(long nbr)
{
    long rest = 0;

    if (nbr < 0) {
        zputchar(45);
        nbr = -nbr;
    }
    rest = nbr % 10;
    nbr = (nbr - rest) / 10;
    if (nbr > 0)
        zputlong(nbr);
    zputchar(rest + INT_TO_ASCII);
}
