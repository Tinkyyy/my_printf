/*
** ETNA PROJECT, 18/03/2020 by belgue_s
** my_strcmp.c
** File description:
**      compare strings
*/

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    while (s1[i] != 0 || s2[i] != 0) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i] < 0 ? -1 : 0);
        i += 1;
    }
    return (0);
}
