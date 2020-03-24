/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_putdouble
** File description:
**      Print double
*/

#include "my.h"

int my_putdouble(double d)
{
    int decimals = d;

    if (d == (int)d) {
        my_putnbr(d);
        return (-1);
    }

    my_putnbr(decimals);
    my_putchar('.');
    decimals = (d - decimals) * 100;
    my_putnbr(decimals);

    return (0);
}
