/*
** EPITECH PROJECT, 2023
** my_strupcase.c
** File description:
** A function that puts every letter
** of every word in it in uppercase.
*/

#include <stdio.h>
#include <stdlib.h>

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
