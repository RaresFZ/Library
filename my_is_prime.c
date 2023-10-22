/*
** EPITECH PROJECT, 2023
** my_is_prime.c
** File description:
** m
*/

int my_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb < 2) {
        return 1;
    }
    while (i < nb) {
        if (nb % i == 0) {
            return 1;
        }
        i++;
    }
    return 0;
}
