/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** math function - square_root
*/

#include <zlib/zmath.h>

uint zsqrt(int nbr)
{
    uint result = 0;

    if (nbr <= 0)
        return 0;
    if (nbr == 1)
        return 1;
    for (int i = 0; i < nbr; i++) {
        result++;
        i = result * result;
        if (i > nbr)
            return 0;
    }
    return result;
}
