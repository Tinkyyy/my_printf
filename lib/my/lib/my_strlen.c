/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_strlen
** File description:
**      my_strlen
*/

int my_strlen(const char *str)
{
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return (i);
}
