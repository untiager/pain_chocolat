/*
** EPITECH PROJECT, 2023
** my_compute_factorial_rec
** File description:
** Returns the factorial value of the number (nb)
*/

#include "my.h"

int my_compute_factorial_rec(int nb)
{
    if (nb == 0 || nb == 1) {
        return 1;
    } else if (nb > 1 && nb < 13) {
        return nb * my_compute_factorial_rec(nb - 1);
    } else {
        return 0;
    }
}
