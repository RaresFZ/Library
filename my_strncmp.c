/*
** EPITECH PROJECT, 2023
** my_strncmp.c
** File description:
** A function that compare two strings lexicographically
** and stop at n character
*/

#include <stdio.h>
#include <stdlib.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int res = 0;

        for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
            if (i >= n) {
                break;
            }
            if (s1[i] != s2[i]) {
                res = s1[i] - s2[i];
                break;
            }
        }
    return res;
}
