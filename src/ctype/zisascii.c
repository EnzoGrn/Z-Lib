/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - is_ascii
*/

#include <zlib/zctype.h>

bool zisascii(int c)
{
    if (c >= 0 && c <= 127)
        return true;
    return false;
}
