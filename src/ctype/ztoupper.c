/*
** EPITECH PROJECT, 2022
** zlib
** File description:
** ctype function - to_upper
*/

int ztoupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return c;
}
