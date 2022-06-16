/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strlen
*/

#include <zlib/zstring.h>

ulong zstrlen(char const *str)
{
    ulong len = 0;

    for (; str[len] != '\0'; len++);
    return len;
}
