/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - isnum
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zisnum(char c)
{
    if (c < '0' || '9' < c)
        return false;
    return true;
}
