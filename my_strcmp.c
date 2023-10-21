/*
** EPITECH PROJECT, 2023
** my_strcmp.c
** File description:
** A function that compare two strings lexicographically
*/

#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
    int res = 0;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            break;
        }
    }
    return res;
}
