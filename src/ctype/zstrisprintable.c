/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - isprintable
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisprintable(char const *str)
{
    for (ulong i = 0; zstrlen(str); i++) {
        if (str[i] < 32 || 126 < str[i])
            return false;
    }
    return true;
}
