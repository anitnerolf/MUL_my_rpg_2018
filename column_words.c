/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** jk
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "my.h"

int     check_column(char *str, char c)
{
    int i = 0;

    for (i = 0; str[i] != '\0' && str[i] != c; i++);
    return (i);
}

int     count_words(char *str, char c)
{
    int z = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c && str[i + 1] != '\0')
            z++;
        i++;
    }
    return (z + 1);
}

void	display_window(sfRenderWindow *window, char **av)
{
    rpg_t	*r = malloc(sizeof(rpg_t));

    r = my_rpg(av);
    while (sfRenderWindow_isOpen(window)) {
        draw_first_sprites(window, r);
        close_window(window, r);
        switch_page(window, r);
        sfRenderWindow_setView(window, r->view);
        sfRenderWindow_display(window);
    }
    destroy_all(r);
    sfRenderWindow_destroy(window);
}
