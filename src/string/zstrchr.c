/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strchr
*/

#include <zlib/zstring.h>

bool zstrchr(char *str, char const c)
{
    for (ulong pos = 0; str[pos] != '\0'; pos++) {
        if (str[pos] == c)
            return true;
    }
    return false;
}
