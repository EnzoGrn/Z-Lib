/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - islower
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrislower(char const *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        if (str[i] < 'a' || 'z' < str[i])
            return false;
    }
    return true;
}
