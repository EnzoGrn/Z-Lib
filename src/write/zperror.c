/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - perror
*/

#include <zlib/zwrite.h>

int zperror(char const *s)
{
    if (!s)
        return EXIT_FAILURE;
    zwrite(2, s);
    return EXIT_FAILURE;
}
