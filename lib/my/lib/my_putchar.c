/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_putchar
** File description:
**      Print char
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1 , &c, 1);
}
