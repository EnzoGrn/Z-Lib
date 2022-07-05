/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** print function - printf
*/

#include <zlib/zprintf.h>
#include <zlib/zwrite.h>

int my_convert_octal(int nbr)
{
    int octal = 0;
    int unit = 1;

    while (nbr != 0) {
        octal += (nbr % 8) * unit;
        nbr = nbr / 8;
        unit = unit * 10;
    }
    return (octal);
}

void put_in_octal(int ascii)
{
    int ascii_bis = ascii;

    zputchar('\\');
    while (ascii_bis < 100) {
        zputchar('0');
        ascii_bis *= 10;
    }
    zputnbr(ascii);
}
