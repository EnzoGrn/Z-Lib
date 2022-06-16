/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - is_sign
*/

#include <zlib/zctype.h>

bool zissign(int c)
{
    if (c == '+' || c == '-')
        return true;
    return false;
}
