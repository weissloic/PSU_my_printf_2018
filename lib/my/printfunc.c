/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "../../include/my.h"
#include <stdarg.h>

void my_Binary(va_list ap)
{
    Binary(va_arg(ap, int));
}

void my_octa(va_list ap)
{
    octa(va_arg(ap, int));
}

void my_Adress_pointer(va_list ap)
{
    Adress_pointer(va_arg(ap, int));
}

void my_Percentage(va_list ap)
{
    my_putchar('%');
}

void my_u_put_nbr(va_list ap)
{
    my_put_nbr2(va_arg(ap, unsigned int));
}