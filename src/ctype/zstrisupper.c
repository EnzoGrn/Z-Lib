/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strisupper
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisupper(char const *str)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        if (!zisupper(str[i]))
            return false;
    }
    return true;
}
