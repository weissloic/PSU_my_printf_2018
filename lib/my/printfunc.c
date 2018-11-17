/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "../../include/my.h"
#include <stdarg.h>

void my_putBinary1(va_list ap)
{
    my_putBinary(va_arg(ap, int));
}

void my_putocta1(va_list ap)
{
    my_putocta(va_arg(ap, int));
}

void my_putAdress_pointer1(va_list ap)
{
    my_putAdress_pointer(va_arg(ap, int));
}

void my_putPercentage1(va_list ap)
{
    my_putchar('%');
}

void my_u_put_nbr1(va_list ap)
{
    my_put_nbr2(va_arg(ap, unsigned int));
}