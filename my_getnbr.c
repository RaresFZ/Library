/*
** EPITECH PROJECT, 2023
** my_getnbr.c
** File description:
** a function that returns a number,
** sent to the function as a string.
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int nb = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            sign = sign * -1;
        i++;
        }
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
                } else {
            return (nb * sign);
        }
    }
    return (nb * sign);
}
