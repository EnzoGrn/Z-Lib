/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - putstr
*/

#include <zlib/zwrite.h>

int zputstr(char const *s)
{
    if (!s)
        return EXIT_FAILURE;
    zwrite(1, s);
    return EXIT_SUCCESS;
}
