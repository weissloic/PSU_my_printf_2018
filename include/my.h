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
void testfunction(char *s, ...);
void hexa(int);
void hexaUPP(int);
void Binary(int);
void octa(int);
void Adress_pointer(int);
void Percentage(char);
void my_put_nbr2(unsigned int nb);
void my_putstroctal(char *);
void character(va_list ap);
void string(va_list ap);
void number(va_list ap);
void my_hexa(va_list ap);
void my_hexaUPP(va_list ap);
void my_octa(va_list ap);
void my_Binary(va_list ap);
void my_Adress_pointer(va_list ap);
void my_Percentage(va_list ap);
void my_u_put_nbr(va_list ap);
void func_put_stroctal(va_list ap);

static void (*point_func[11])(va_list ap) = {
    &character,
    &string,
    &number,
    &my_hexa,
    &my_hexaUPP,
    &my_octa,
    &my_Binary,
    &my_Adress_pointer,
    &my_Percentage,
    &my_u_put_nbr,
    &func_put_stroctal
};


#endif