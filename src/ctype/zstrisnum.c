/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strisnum
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisnum(char const *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        if (!zisnum(str[i]))
            return false;
    }
    return true;
}
