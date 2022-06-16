/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** write function - write
*/

#include <unistd.h>
#include <zlib/zctype.h>
#include <zlib/zstring.h>

llong zwrite(int fd, char const *str)
{
    if (!str)
        return -1;
    if (fd < 0)
        return -1;
    return (write(fd, str, zstrlen(str)));
}
