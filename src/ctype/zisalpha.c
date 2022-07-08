/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - isalpha
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zisalpha(char c)
{
    if (c < 'A' || ('Z' < c && c < 'a') || 'z' < c)
        return false;
    return true;
}
