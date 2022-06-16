/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string function - strcapitalize
*/

#include <zlib/zstring.h>

static int is_low(char *str, int i)
{
    return (str[i] >= 'a' && str[i] <= 'z');
}

static int is_up(char *str, int i)
{
    return (str[i] >= 'A' && str[i] <= 'Z');
}

static int is_dig(char *str, int i)
{
    return (str[i] >= '0' && str[i] <= '9');
}

char *zstrcapitalize(char *str)
{
    int i = 0;
    int low;
    int lowm;
    int up;
    int dig;

    str = zstrtolower(str);
    while (str[i] != '\0') {
        low = is_low(str, i);
        lowm = is_low(str, i - 1);
        up = is_up(str, i - 1);
        dig = is_dig(str, i - 1);
        if ((i == 0 && low) || (low && (!lowm) && !up && !dig))
            str[i] -= 32;
        i++;
    }
    return str;
}
