/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string - strncmp
*/

#include <zlib/zstring.h>

int zstrncmp(char const *s1, char const *s2, ulong n)
{
    for (unsigned int pos = 0; pos < n && (s1[pos] != '\0' ||
    s2[pos] != '\0'); pos++) {
        if (s1[pos] < s2[pos] || s1[pos] > s2[pos])
            return (s1[pos] - s2[pos]);
    }
    return 0;
}
