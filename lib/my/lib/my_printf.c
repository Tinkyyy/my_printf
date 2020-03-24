/*
** ETNA PROJECT, 17/03/2020 by belgue_s
** my_printf.c
** File description:
**      printf base
*/

#include "my.h"

int my_printf(const char *str, ...)
{
    if (str == 0)
        return (-1);

    va_list argsInfo;
    va_start(argsInfo, str);

    char currentChar;

    while ((currentChar = *str) != '\0') {
        str++;
        if (currentChar != '%') {
            my_putchar(currentChar);
            continue;
        }
        switch (*str++) {
        case '%':
            my_putchar('%');
            break;
        case 'o':
            my_putoctal(va_arg(argsInfo, unsigned int));
            break;
        case 'u':
            my_put_unsigned_nbr(va_arg(argsInfo, unsigned int));
            break;
        case 'x':
            my_put_unsigned_nbr_hex(va_arg(argsInfo, unsigned int), 1);
            break;
        case 'X':
            my_put_unsigned_nbr_hex(va_arg(argsInfo, unsigned int), 0);
            break;
        case 's':
            my_putstr(va_arg(argsInfo, char *));
            break;
        case 'c':
            my_putchar(va_arg(argsInfo, int));
            break;
        case 'i':
        case 'd':
            my_putnbr(va_arg(argsInfo, int));
            break;
        }
    }
    va_end(argsInfo);

    return (0);
}
