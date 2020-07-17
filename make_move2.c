/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** ghjk
*/

#include "my.h"

int	count_map(char **k)
{
    int i = 0;

    while (k[i]) {
        i++;
    }
    return (i);
}

int	count_col(char **k)
{
    int	i = 0;
    int	j = 0;

    while (k[i][j] != '\0') {
        j++;
    }
    return (j);
}

void	check_move2(rpg_t *r, sfEvent event)
{
    int	j = count_col(r->k);
    float	x = sfSprite_getPosition(r->p->my_sprite).y;
    float	y = sfSprite_getPosition(r->p->my_sprite).x;
    int	w = x / 40.0;
    int	z = y / 40.0;

    if (z > 0 && (r->k[w][z - 1] == '*' || \
    r->k[w][z - 1] == '1' || r->k[w][z - 1] == '2' || \
    r->k[w][z - 1] == '3' || r->k[w][z - 1] == '4' || \
    r->k[w][z - 1] == '5' || r->k[w][z - 1] == 'h'))
        move_left(r, event);
    if ((j - z) > 0 && (r->k[w][z + 1] == '*' || \
    r->k[w][z + 1] == '1' || r->k[w][z + 1] == '2' || \
    r->k[w][z + 1] == '3' || r->k[w][z + 1] == '4' || \
    r->k[w][z + 1] == '5' || r->k[w][z + 1] == 'h'))
        move_right(r, event);
}

void	check_move(rpg_t *r, sfEvent event)
{
    int i = count_map(r->k);
    float	x = sfSprite_getPosition(r->p->my_sprite).y;
    float	y = sfSprite_getPosition(r->p->my_sprite).x;
    int	w = x / 40.0;
    int	z = y / 40.0;

    if (w > 0 && (r->k[w - 1][z] == '*' || \
    r->k[w - 1][z] == '1' || r->k[w - 1][z] == '2' || \
    r->k[w - 1][z] == '3' || r->k[w - 1][z] == '4' || \
    r->k[w - 1][z] == '5' || r->k[w - 1][z] == 'h'))
        move_up(r, event);
    if ((i - w) > 0 && (r->k[w + 1][z] == '*' || \
    r->k[w + 1][z] == '1' || r->k[w + 1][z] == '2' || \
    r->k[w + 1][z] == '3' || r->k[w + 1][z] == '4' || \
    r->k[w + 1][z] == '5' || r->k[w + 1][z] == 'h'))
        move_down(r, event);
    check_move2(r, event);
}

void	player_animation(rpg_t *r)
{
    r->p->time = sfClock_getElapsedTime(r->p->clock);
    r->p->second = r->p->time.microseconds / 500000.0;
    if (r->p->second > 0.07) {
        if (r->p->rect.left == 80) {
            r->p->rect.left = 0;
        } else
            r->p->rect.left = r->p->rect.left + 40;
        sfSprite_setTextureRect(r->p->my_sprite, r->p->rect);
        sfClock_restart(r->p->clock);
    }
}
