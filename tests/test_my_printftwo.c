/*
** EPITECH PROJECT, 2018
** test_eval_expr.c
** File description:
** Testing eval expr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <string.h>

void redirect_all_stdtwo(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, testing_un, .init = redirect_all_stdtwo)
{
    my_printf("%u", -7);
    cr_assert_stdout_eq_str("4294967289");
}

Test(my_printf, testing_putocta, .init = redirect_all_stdtwo)
{
    char str[5];
    my_strcpy(str, "toto");
    str[1] = 6;
    my_printf("%S", str);
    cr_assert_stdout_eq_str("t\006to");
}

Test(my_printf, testing_putstrint, .init = redirect_all_stdtwo)
{
    my_printf("%sje%d", "hello", 5);
    cr_assert_stdout_eq_str("helloje5");
}

Test(my_printf, testing_withoutpercent, .init = redirect_all_stdtwo)
{
    my_printf("niquecriterion");
    cr_assert_stdout_eq_str("niquecriterion");
}