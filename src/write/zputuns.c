/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - put_uns
*/

#include <zlib/zwrite.h>

void zputuns(uint nbr)
{
    int rest = 0;

    if (nbr >= 10) {
        rest = nbr % 10;
        nbr = (nbr - rest) / 10;
        zputuns(nbr);
        zputchar('0' + rest);
    } else {
        zputchar('0' + nbr);
    }
}
