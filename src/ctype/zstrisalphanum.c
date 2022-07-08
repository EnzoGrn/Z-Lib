/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - strisalphanum
*/

#include <zlib/zctype.h>

bool zstrisalphanum(char const *str)
{
    if (zstrisalpha(str) == true && zstrisnum(str) == true)
        return true;
    return false;
}
