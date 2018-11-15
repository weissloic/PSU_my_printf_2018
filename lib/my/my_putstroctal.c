/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "../../include/my.h"
#include <stdarg.h>

void my_putstroctal(char *s)
{
    while (*s){
        if (*s < 32 || *s >= 127){
            if (*s < 7)
                my_putstr("\\00");
            else if (*s > 7 && *s < 32)
                my_putstr("\\0");
            else if (*s >= 127)
                my_putstr("\\");
            octa(*s);
        }
        else
            my_putchar(*s);
        s++;
    }
}