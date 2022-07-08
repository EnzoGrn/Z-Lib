/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - isprintable
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zisprintable(char str)
{
    if (str < 32 || 126 < str)
        return false;
    return true;
}
