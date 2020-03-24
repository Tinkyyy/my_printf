/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_putstr
** File description:
**      Print char*
*/

#include "my.h"

void my_putstr(char *src)
{
    int i = 0;

    while (src[i] != '\0') {
        my_putchar(src[i]);
        i++;
    }
}
