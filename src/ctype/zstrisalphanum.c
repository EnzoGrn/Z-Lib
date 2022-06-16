/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - is_alpha_num
*/

#include <zlib/zctype.h>

bool zstrisalphanum(char const *str)
{
    if (zstrisalpha(str) == true && zstrisnum(str) == true)
        return true;
    return false;
}
