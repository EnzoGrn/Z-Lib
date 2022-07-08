/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - islower
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zislower(char c)
{
    if (c < 'a' || 'z' < c)
        return false;
    return true;
}
