/*
** EPITECH PROJECT, 2018
** task03
** File description:
** task03
*/

#include "my.h"

char	*my_revstr(char *str)
{
    int	i = 0;
    int	j = my_strlen(str);
    char	*ptr = malloc(sizeof(char) * my_strlen(str));

    if (my_strlen(str) == -1)
        return (NULL);
    else {
        for ( ; j > 0; j--) {
            ptr[i] = str[j - 1];
            i++;
        }
        ptr[i] = '\0';
        return (ptr);
    }
}
