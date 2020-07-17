/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2018
** File description:
** my_strlen
*/

#include "my.h"

int	my_strlen(char const *str)
{
    int	i = 0;

    if (str != NULL) {
        while (str[i] != '\0') {
            i++;
        }
        return (i);
    }
    return (0);
}
