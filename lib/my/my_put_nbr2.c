/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** my_put_nbr
*/
#include "../../include/my.h"
#include <stdarg.h>

void my_put_nbr2(unsigned int nb)
{
    unsigned int nbr;

    if (nb >= 10) {
        nbr = nb % 10;
        nb = nb / 10;
        my_put_nbr2(nb);
        my_putchar(nbr + 48);
    } else
        my_putchar(nb + 48);
}