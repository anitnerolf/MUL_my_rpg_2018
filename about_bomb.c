/*
** EPITECH PROJECT, 2019
** fghjk
** File description:
** jkl
*/

#include "my.h"

sfVector2f	position_sprite(int x, int y)
{
    sfVector2f	pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}

void	animation_bomb(bomb_t *b)
{
    b->time = sfClock_getElapsedTime(b->clock);
    b->seconds = b->time.microseconds / 1000000.0;
    if (b->seconds > 0.15) {
        if (b->rect.left == 520) {
            b->rect.left = 0;
            b->rect.top = 130;
        } else
            b->rect.left = b->rect.left + 130;
        sfSprite_setTextureRect(b->sp, b->rect);
        sfClock_restart(b->clock);
    }
}
