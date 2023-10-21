/*
** EPITECH PROJECT, 2023
** my_str_isnum.c
** File description:
** A function that return 1 if a string
** contains only digits and 0 otherwise.
*/

#include <stdio.h>
#include <stdlib.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
