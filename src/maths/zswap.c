/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** math function - swap
*/

void zswap(int *a, int *b)
{
    int numb_swap = *a;
    *a = *b;
    *b = numb_swap;
}
