/*
** EPITECH PROJECT, 2023
** my_str_isupper.c
** File description:
** A function that return 1 if a string
** contains only uppercase alphabet and 0 otherwise.
*/

#include <stdio.h>
#include <stdlib.h>

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
