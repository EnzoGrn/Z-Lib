/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - putchar
*/

#include <unistd.h>

void zputchar(char c)
{
    write(1, &c, 1);
}
