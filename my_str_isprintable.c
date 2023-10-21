/*
** EPITECH PROJECT, 2023
** my_str_isprintable.c
** File description:
** A function that return 1 if a string
** contains only printable characters and 0 otherwise.
*/

#include <stdio.h>
#include <stdlib.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 33 && str[i] <= 126) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
