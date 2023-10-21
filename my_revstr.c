/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** a function that reverses a string
*/

#include <stdio.h>

int my_strl(char const *str)
{
    int len;

    len = 0;
    while (str[len] != '\0') {
        len = len + 1;
    }
    return len;
}

char *my_revstr(char *str)
{
    int l;
    int ld;
    char rev;

    l = 0;
    ld = my_strl(str) - 1;
    while (l < ld) {
        rev = str[l];
        str[l] = str[ld];
        str[ld] = rev;
        l++;
        ld--;
    }
    return (str);
}
