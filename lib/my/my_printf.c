/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "../../include/my.h"
#include <stdarg.h>

void testfunction(char *s, ...)
{
    va_list ap;
    va_start(ap, s);
    int i = 0;

    if ((s[i] == '#' && s[i+1] == 'x')) {
        my_putstr("0x");
        point_func[4](ap);
        i++;
    }
    else if ((s[i] == '#' && s[i+1] == 'o')) {
        my_putstr("0");
        point_func[6](ap);
        i++;
    }
    else if ((s[i] == '+' && s[i+1] == 'd')) {
        my_putchar('+');
        point_func[2](ap);
        i++;
    }
    va_end(ap);
}

int my_printf(char *s, ...)
{
    va_list ap;
    va_start(ap, s);

    char tab[11] = {'c', 's', 'd', 'x', 'X', 'o', 'b', 'p', '%', 'u', 'S'};
    int u = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            s++;
            for (u = 0; s[i] != tab[u] && u < 12; u++); {
                testfunction(s);
                if (u == 12) {
                    my_putchar('%');
                    my_putchar(s[i]);
                }
                else
                    point_func[u](ap);
            }
        } else
            my_putchar(s[i]);
    }
    va_end(ap);
}