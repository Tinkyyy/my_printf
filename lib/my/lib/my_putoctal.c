/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_putoctal
** File description:
**      Print octal
*/

#include "my.h"

void my_putoctal(unsigned int n)
{
    int result = 0;
    int i = 1;

    while (n != 0) {
        result += (n % 8) * i;
        n = n / 8;
        i = i * 10;
    }

    my_putnbr(result);
}
