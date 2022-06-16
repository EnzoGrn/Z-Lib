/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - itoa
*/

#include <zlib/zstring.h>
#include <zlib/zmem.h>

char *zitoa(llong nbr)
{
    char *str = zcalloc(sizeof(llong), 1);
    uint i = 0;
    llong new_nb = 0;

    if (!str)
        return NULL;
    for (uint j = 0; j < sizeof(llong); j++)
        str[j] = 0;
    if (nbr < 0)
        str[i++] = '-';
    for (; nbr > 9; i++) {
        new_nb = nbr % 10;
        nbr = nbr / 10;
        str[i] = new_nb + INT_TO_ASCII;
    }
    str[i] = nbr + INT_TO_ASCII;
    zrevstr(str);
    return str;
}
