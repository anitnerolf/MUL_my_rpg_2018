/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** ghj
*/

#include "my.h"

void    print_map(rpg_t *r, sfRenderWindow *w)
{
    for (int i = 0; i < 54; i++) {
        for (int j = 0; j < 54; j++) {
            switch_char(r, w, i, j);
        }
    }
}


void	member_found(rpg_t *r)
{
    float	y = sfSprite_getPosition(r->p->my_sprite).x;
    float	x = sfSprite_getPosition(r->p->my_sprite).y;
    int	a = y / 40.0;
    int b = x / 40.0;

    if ((r->k[b][a] == '1' || r->k[b][a] == '2' || \
    r->k[b][a] == '3' || r->k[b][a] == '4' || \
    r->k[b][a] == '5') && \
    sfKeyboard_isKeyPressed(sfKeySpace)) {
        r->member++;
        r->m->rect1.width += 50;
        sfSound_play(r->s->games);
        r->k[b][a] = '*';
    }
    sfSprite_setTextureRect(r->m->mem_sp, r->m->rect1);
}

void	you_are_home(rpg_t *r)
{
    float	y = sfSprite_getPosition(r->p->my_sprite).x;
    float	x = sfSprite_getPosition(r->p->my_sprite).y;
    int	a = y / 40.0;
    int b = x / 40.0;

    if (sfKeyboard_isKeyPressed(sfKeySpace) && \
    r->k[b][a] == 'h' && r->member == 5 && r->score < 200) {
        sfSound_play(r->s->win);
        r->page = 8;
    }
}

void	bomb_exploded(rpg_t *r)
{
    float	y = sfSprite_getPosition(r->f->sp).x;
    float	x = sfSprite_getPosition(r->f->sp).y;
    int	a = y / 40.0;
    int b = x / 40.0;

    if (r->k[b][a] == 'X' && r->a != 0)
        r->k[b][a] = '*';
}

void	draw_first_sprites(sfRenderWindow *window, rpg_t *r)
{
    sfRenderWindow_clear(window, sfRed);
    sfRenderWindow_drawSprite(window, r->b->family_sp, NULL);
    sfRenderWindow_drawSprite(window, r->b->intro_sp, NULL);
    r->b->pos--;
    sfSprite_setPosition(r->b->intro_sp, set_position(115, r->b->pos));
    sfRenderWindow_drawText(window, r->t->zero_text, NULL);
}
