/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - is_negative
*/

#include <zlib/zctype.h>

bool zisneg(int n)
{
    if (n < 0)
        return true;
    return false;
}
