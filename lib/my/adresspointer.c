/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "../../include/my.h"
#include <stdarg.h>

void my_putAdress_pointer(int Adress_pointer)
{
    my_putstr("0x");
    my_puthexa(Adress_pointer);
}