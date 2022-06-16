/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - tolower
*/

int ztolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 'a');
    return c;
}
