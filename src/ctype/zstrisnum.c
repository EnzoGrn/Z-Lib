/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - isnum
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisnum(char const *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        if (str[i] < '0' || '9' < str[i])
            return false;
    }
    return true;
}
