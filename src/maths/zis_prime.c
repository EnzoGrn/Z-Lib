/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** math function - is_prime
*/

#include <zlib/zmath.h>

bool zis_prime(int nb)
{
    int prime = 2;

    if (nb <= 1){
        return true;
    }
    while (prime < nb){
        if (nb % prime == 0){
            return true;
        }
        prime++;
    }
    return false;
}
