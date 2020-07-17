/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2018
** File description:
** my_putchar
*/

#include "my.h"

void	my_putchar(char c)
{
    write(1, &c, 1);
}
