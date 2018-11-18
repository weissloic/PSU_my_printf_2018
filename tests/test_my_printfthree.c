/*
** EPITECH PROJECT, 2018
** test_errors.c
** File description:
** testing errors
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <string.h>

void redirect_all_stdtro(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, testing_hexa, .init = redirect_all_stdtro)
{
    my_printf("%x", 7878);
   cr_assert_stdout_eq_str("1ec6");
}

Test(my_printf, testing_hexaup, .init = redirect_all_stdtro)
{
    my_printf("%X", 7878);
   cr_assert_stdout_eq_str("1EC6");
}

Test(my_printf, testing_octa, .init = redirect_all_stdtro)
{
    my_printf("%o", 7878);
   cr_assert_stdout_eq_str("17306");
}

Test(my_printf, testing_binary, .init = redirect_all_stdtro)
{
    my_printf("%b", 7878);
   cr_assert_stdout_eq_str("1111011000110");
}
