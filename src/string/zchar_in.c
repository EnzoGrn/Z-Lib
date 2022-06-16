/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - char_in
*/

#include <zlib/zstring.h>

bool zchar_in(char *str, char c)
{
    for (ulong i = 0; i < zstrlen(str); i++) {
        if (str[i] == c)
            return true;
    }
    return false;
}
