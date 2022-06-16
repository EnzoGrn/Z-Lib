/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - is_upper
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisupper(char const *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        if (str[i] < 'A' || 'Z' < str[i])
            return false;
    }
    return true;
}
