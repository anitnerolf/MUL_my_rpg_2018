/*
** EPITECH PROJECT, 2019
** make
** File description:
** move
*/

#include "my.h"

play_t	*my_create(void)
{
    play_t *info = malloc(sizeof(play_t));

    info->choose_player = 1;
    play_rect(info);
    info->texture = sfTexture_createFromFile("assets/man_rpg.png", NULL);
    info->sprite = sfSprite_create();
    sfSprite_setTexture(info->sprite, info->texture, sfTrue);
    sfSprite_setTextureRect(info->sprite, info->rect);
    sfSprite_setPosition(info->sprite, info->offset);
    other_players(info);
    other_sprites(info);
    info->my_sprite = sfSprite_copy(info->sprite);
    return (info);
}

void	move_down(rpg_t *r, sfEvent event)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyDown) {
        sfSprite_move(r->p->my_sprite, r->p->down_off);
        r->p->rect.top = 0;
        if (r->p->rect.left == 80) {
            r->p->rect.left = 0;
        } else
            r->p->rect.left = r->p->rect.left + 40;
        sfSprite_setTextureRect(r->p->my_sprite, r->p->rect);
    }
}

void	move_up(rpg_t *r, sfEvent event)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp) {
        sfSprite_move(r->p->my_sprite, r->p->up_off);
        r->p->rect.top = 120;
        if (r->p->rect.left == 80) {
            r->p->rect.left = 0;
        } else
            r->p->rect.left = r->p->rect.left + 40;
        sfSprite_setTextureRect(r->p->my_sprite, r->p->rect);
    }
}

void	move_left(rpg_t *r, sfEvent event)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyLeft) {
        sfSprite_move(r->p->my_sprite, r->p->left_off);
        r->p->rect.top = 40;
        if (r->p->rect.left == 80) {
            r->p->rect.left = 0;
        } else
            r->p->rect.left = r->p->rect.left + 40;
        sfSprite_setTextureRect(r->p->my_sprite, r->p->rect);
    }
}

void	move_right(rpg_t *r, sfEvent event)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyRight) {
        sfSprite_move(r->p->my_sprite, r->p->right_off);
        r->p->rect.top = 80;
        if (r->p->rect.left == 80) {
            r->p->rect.left = 0;
        } else
            r->p->rect.left = r->p->rect.left + 40;
        sfSprite_setTextureRect(r->p->my_sprite, r->p->rect);
    }
}
