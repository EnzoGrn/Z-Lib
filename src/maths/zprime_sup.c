/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** math function - prime_sup
*/

#include <zlib/zmath.h>

int zprime_sup(int nb)
{
    while (zis_prime(nb) == true)
        nb++;
    return nb;
}
