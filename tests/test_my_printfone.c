/*
** EPITECH PROJECT, 2018
** test_my_memset.c
** File description:
** testing my_memset
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include <string.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, testing_str, .init = redirect_all_std)
{
    my_printf("%s", "Hello");
   cr_assert_stdout_eq_str("Hello");
}

Test(my_printf, testing_int, .init = redirect_all_std)
{
    my_printf("%d", 56);
   cr_assert_stdout_eq_str("56");
}

Test(my_printf, testing_int2, .init = redirect_all_std)
{
    my_printf("%i", 56);
   cr_assert_stdout_eq_str("56");
}

