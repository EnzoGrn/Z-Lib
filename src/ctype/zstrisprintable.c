/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strisprintable
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisprintable(char const *str)
{
    for (ulong i = 0; zstrlen(str); i++) {
        if (!zisprintable(str[i]))
            return false;
    }
    return true;
}
