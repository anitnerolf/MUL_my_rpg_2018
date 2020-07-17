/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** jk
*/

#include "my.h"

double_str_t	*double_str(void)
{
    double_str_t	*m = malloc(sizeof(double_str_t));

    m->i = 0;
    m->j = 0;
    m->k = 0;
    return (m);
}

char	*malloc_it(int k)
{
    char	*str = malloc(sizeof(char *) * k);

    str = malloc(sizeof(char *) * (k + 1));
    return (str);
}

char    **allocate_memory(int line, int cols)
{
    char        **map = malloc(sizeof(char *) * line + 1);
    int i = 0;

    map[i] = malloc(sizeof(char *) * cols + 1);
    for (i = 0; i < line; i++)
        map[i] = malloc(sizeof(char) * cols + 1);
    map[i] = NULL;
    return (map);
}

char    **double_array(char *str, char c)
{
    char    **tab = NULL;
    int     i = check_column(str, c);
    int     j = count_words(str, c);
    double_str_t	*m = double_str();

    tab = allocate_memory(j, i);
    for (; str[m->k] != '\0'; m->k++) {
        for (;str[m->k] == c;  m->k++) {
            tab[m->i][m->j] = '\0';
            m->j = 0;
            m->i++;
            tab[m->i] = malloc_it(check_column(str, c));
        }
        tab[m->i][m->j] = str[m->k];
        m->j++;
        tab[m->i][m->j] = '\0';
    }
    tab[m->i + 1] = NULL;
    return (tab);
}
