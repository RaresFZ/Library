/*
** EPITECH PROJECT, 2023
** my_swap.c
** File description:
** function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

#include <stdio.h>

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
