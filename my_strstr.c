/*
** EPITECH PROJECT, 2023
** my_strstr.c
** File description:
** A function that search the first occurence of
** the second string in the first one.
*/

#include <stdio.h>
#include <stdlib.h>

char *my_strstr(char *str, char const *to_find)
{
    int	i = 0;

    if (str[0] != '\0') {
        while (to_find[i] != '\0') {
            if (to_find[i] != str[i]) {
                return (my_strstr(str + 1, to_find));
            }
            i++;
        }
        return str;
    } else {
        return 0;
    }
}
