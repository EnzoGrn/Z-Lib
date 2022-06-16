/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - is_space
*/

#include <zlib/zctype.h>

bool zisspace(int c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return true;
    return false;
}
