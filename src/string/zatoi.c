/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** string function - atoi
*/

#include <zlib/zstring.h>

static int check_isint(long nb)
{
    if (nb < MAX_NEGINT || nb > MAX_POSINT)
        return 0;
    else
        return nb;
}

static void check_neg(int *isneg, char str)
{
    if (str == 43)
        *isneg = 1;
    if (str == 45)
        *isneg = -1;
}

static bool is_letter(char c)
{
    if (c < 48 && c > 57)
        return false;
    else if (c == 43 || c == 45 || (c >= 48 && c <= 57))
        return true;
    else
        return false;
}

int zatoi(char const *str)
{
    long nb = 0;
    uint i = 0;
    bool isletter = true;
    int sign = 1;

    while (str[i] != '\0' && (isletter != false)) {
        if (str[i] >= 48 && str[i] <= 57) {
            nb = nb + str[i] - 48;
            nb = nb * 10;
        }
        check_neg(&sign, str[i]);
        isletter = is_letter(str[i]);
        i++;
    }
    nb = nb / 10;
    nb = nb * sign;
    return check_isint(nb);
}
