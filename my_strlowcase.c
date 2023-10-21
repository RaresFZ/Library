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
    int i;

    while(str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return 0;
}

