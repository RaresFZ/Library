/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** function that counts and returns the number of
** characters found in the string passed as parameter
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int len;

    len = 0;
    while (str[len] != '\0') {
        len = len + 1;
    }
    return len;
}
