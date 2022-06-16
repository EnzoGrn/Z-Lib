/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - count_occur
*/

#include <zlib/zstring.h>

ulong zcount_occur(char *str, char c)
{
    ulong nbr_occur = 0;

    for (ulong i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            nbr_occur++;
    }
    return nbr_occur;
}
