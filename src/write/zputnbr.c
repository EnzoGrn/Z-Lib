/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - putnbr
*/

#include <zlib/zwrite.h>

void zputnbr(int nbr)
{
    int rest = 0;

    if (nbr < 0) {
        zputchar(45);
        nbr = -nbr;
    }
    rest = nbr % 10;
    nbr = (nbr - rest) / 10;
    if (nbr > 0)
        zputnbr(nbr);
    zputchar(rest + INT_TO_ASCII);
}
