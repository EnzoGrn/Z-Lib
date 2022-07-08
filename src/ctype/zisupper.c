/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - is_upper
*/

#include <zlib/zctype.h>
#include <zlib/zstring.h>

bool zisupper(char c)
{
    if (c < 'A' || 'Z' < c)
        return false;
    return true;
}