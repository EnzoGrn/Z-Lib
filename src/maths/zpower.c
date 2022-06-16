/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** math function - power
*/

#include <zlib/zmath.h>

int zpower(int nb, int p)
{
    int power;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (p % 2 == 0){
        power = zpower(nb, p / 2);
        return power * power;
    }
    return nb * zpower(nb, p - 1);
}
