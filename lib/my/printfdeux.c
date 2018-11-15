/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "../../include/my.h"
#include <stdarg.h>

void character(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void string(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void number(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void my_hexa(va_list ap)
{
    hexa(va_arg(ap, int));
}

void my_hexaUPP(va_list ap)
{
    hexaUPP(va_arg(ap, int));
}