/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_put_unsigned_nbr
** File description:
**      Print unsigned integers
*/

#include "my.h"

void my_put_unsigned_nbr(unsigned int n)
{
  if (n >= 10) {
    my_put_unsigned_nbr(n / 10);
    my_put_unsigned_nbr(n % 10);
  } else
    my_putchar(48 + n);
}
