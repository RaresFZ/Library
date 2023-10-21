/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** function that displays, one-by-one,
** the characters of a string
*/

#include <stdio.h>

int my_putstr(char const *str)
{
    int nb_cha;

    nb_cha = 0;
    while (str[nb_cha] != '\0') {
        my_putchar(str[nb_cha]);
        nb_cha = nb_cha + 1;
    }
}
