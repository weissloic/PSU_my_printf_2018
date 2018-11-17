/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my_h
*/
#include <stdarg.h>
#include <stdio.h>



#ifndef MY_LIST_H_
#define MY_LIST_H_

#define IS_NUM(valeur) (valeur >= '0' && valeur <= '9')
typedef unsigned int DEFAULT_RETURN;


char *my_strcat(char *dest, char const *src);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_compute_power_it(int nb, int p);
int my_print_params(int argc, char **argv);
int my_show_word_array(char * const *tab);
int my_printf(char *s, ...);
void my_isflagfunction(int i, char *s, va_list ap);
void my_iswritefunction(int i, int u,  char *s, va_list ap);
void my_getocta(char *s);
void my_puthexa(int);
void my_puthexaUPP(int);
void my_putBinary(int);
void my_putocta(int);
void my_putAdress_pointer(int);
void my_putPercentage(char);
void my_put_nbr2(unsigned int nb);
void my_putstroctal(char *);
void my_putcharacter1(va_list ap);
void my_putstring1(va_list ap);
void my_putnumber1(va_list ap);
void my_puthexa1(va_list ap);
void my_puthexaUPP1(va_list ap);
void my_putocta1(va_list ap);
void my_putBinary1(va_list ap);
void my_putAdress_pointer1(va_list ap);
void my_putPercentage1(va_list ap);
void my_u_put_nbr1(va_list ap);
void func_put_stroctal1(va_list ap);

static void (*point_func[12])(va_list ap) = {
    &my_putcharacter1,
    &my_putstring1,
    &my_putnumber1,
    &my_puthexa1,
    &my_puthexaUPP1,
    &my_putocta1,
    &my_putBinary1,
    &my_putAdress_pointer1,
    &my_putPercentage1,
    &my_u_put_nbr1,
    &func_put_stroctal1,
    &my_putnumber1
};


#endif