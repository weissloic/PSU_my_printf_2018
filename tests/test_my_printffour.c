/*
** EPITECH PROJECT, 2018
** test_infin_add.c
** File description:
** testing infin_add
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <string.h>

void redirect_all_stdfour(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, testing_percentage, .init = redirect_all_stdfour)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, testing_other, .init = redirect_all_stdfour)
{
    my_printf("%y");
    cr_assert_stdout_eq_str("%y");
}

Test(my_printf, testing_char, .init = redirect_all_stdfour)
{
    my_printf("%c", 't');
    cr_assert_stdout_eq_str("t");
}

Test(my_printf, testing_na, .init = redirect_all_stdfour)
{
    my_printf("%%%%d", 5);
    cr_assert_stdout_eq_str("%%d");
}