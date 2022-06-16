/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strcat
*/

#include <zlib/zstring.h>
#include <stdlib.h>

char *zstrcat(char *dest, char const *src)
{
    char *tmp;
    ulong pos_dest = 0;

    if (!dest)
        return zstrdup(src);
    else {
        tmp = malloc(sizeof(char) * (zstrlen(src) + zstrlen(dest) + 1));
        if (!tmp)
            return NULL;
        zstrcpy(tmp, dest);
        free(dest);
    }
    pos_dest = zstrlen(tmp);
    for (ulong pos_src = 0; src[pos_src] != '\0'; pos_dest++, pos_src++)
        tmp[pos_dest] = src[pos_src];
    tmp[pos_dest] = '\0';
    return tmp;
}
