/*
** EPITECH PROJECT, 2023
** my_strlowcase.c
** File description:
** A function that puts every letter of
** every word in it in lowercase.
*/

#include <stdio.h>
#include <stdlib.h>

char *my_strlowcase(char *str)
{
    int len = my_strlen(&str);
    int i;

    for (i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        return 0;
    }
}
