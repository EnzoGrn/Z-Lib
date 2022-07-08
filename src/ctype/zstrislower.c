/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strislower
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrislower(char const *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        if (!zislower(str[i]))
            return false;
    }
    return true;
}
