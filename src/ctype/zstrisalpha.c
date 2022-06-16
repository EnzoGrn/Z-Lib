/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - isalpha
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zstrisalpha(char const *s)
{
    for (ulong i = 0; i < zstrlen(s); i++) {
        if (s[i] < 'A' || ('Z' < s[i] && s[i] < 'a') || 'z' < s[i])
            return false;
    }
    return true;
}
