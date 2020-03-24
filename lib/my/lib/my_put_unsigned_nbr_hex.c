/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_put_nbr_hexa
** File description:
**      Print unsigned hexa
*/

#include "my.h"

void my_put_unsigned_nbr_hex(unsigned int n, int maj)
{
  int size = 16;

  if (n >= (unsigned)size - 1)
    my_put_unsigned_nbr_hex(n / size, 0);

  if (maj == 0)
    my_putchar("0123456789ABCDEF"[n % size]);
  else
    my_putchar("0123456789abcdef"[n % size]);
}
