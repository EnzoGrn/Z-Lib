/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string function - strstr
*/

#include <zlib/zstring.h>

bool zstrstr(char *str, char const *to_find)
{
    ulong pos_str = 0;
    ulong pos_find = 0;
    char *find;

    while (str && str[pos_str]) {
        if (to_find[pos_find] == str[pos_str]) {
            pos_find++;
            find = &str[pos_str];
        } else if (pos_find != zstrlen(to_find)) {
            pos_find = 0;
            find = 0;
        }
        pos_str++;
    }
    find = find - pos_find + 1;
    if (pos_find > 0)
        return true;
    else
        return false;
}
