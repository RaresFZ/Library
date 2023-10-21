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
    int len = my_strlen(&str);
    int i;

    for (i = 0; i < len; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        return 0;
    }
}
