/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strisalpha
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisalpha(char const *s)
{
    for (ulong i = 0; i < zstrlen(s); i++) {
        if (!zisalpha(s[i]))
            return false;
    }
    return true;
}
