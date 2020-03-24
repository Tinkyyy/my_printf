/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_putnbr
** File description:
**      Print integers
*/

#include "my.h"

void my_putnbr(int n)
{
  if (n == -2147483648)
    my_putstr("-2147483648");

  if (n >= 10) {
      my_putnbr(n / 10);
      my_putnbr(n % 10);
    } else
    my_putchar(48 + n);
}

