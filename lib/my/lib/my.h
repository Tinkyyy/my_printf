/*
** ETNA PROJECT, 17/03/2020 by belgue_s
** my.h
** File description:
**      All functions of my lib
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char *src);
void my_putnbr(int n);
void my_put_unsigned_nbr(unsigned int n);
void my_put_unsigned_nbr_hex(unsigned int n, int maj);
void my_putoctal(unsigned int n);
int my_putdouble(double d);
int my_strlen(const char *str);
int my_strcmp(const char *s1, const char *s2);
int my_printf(const char *str, ...);

#endif
