#include "my.h"

int main(void)
{
    my_printf("1 - une chaine\n");
    my_printf("2 - %s\n", "une autre chaine");
    my_printf("3 - %i\n", 42);
    my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
    my_printf("---------------------------------\n");
    my_printf("1 - %o\n", 42); /* unsigned octal */
    my_printf("2 - %u\n", (unsigned int)4200000000); /* unsigned decimal */
    my_printf("3 - %x\n", 42); /* unsigned hexadecimal */
    my_printf("4 - %X\n", 42); /* unsigned hexadecimal */
    my_printf("5 - %d%%\n", 42);

    return (0);
}