/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** fg
*/

#include "my.h"

void	play_button(sfMouseButtonEvent mouse, rpg_t *r, \
    sfRenderWindow *w)
{
    if (mouse.x >= 390 && mouse.x <= 634 && \
        mouse.y >= 250 && mouse.y <= 341)
        r->page = 7;
    if (mouse.x >= 390 && mouse.x <= 634 && \
        mouse.y >= 380 && mouse.y <= 471)
        r->page = 3;
    if (mouse.x >= 390 && mouse.x <= 634 && \
        mouse.y >= 510 && mouse.y <= 601)
        sfRenderWindow_close(w);
}

void	pause_button(sfMouseButtonEvent mouse, rpg_t *r, \
    sfRenderWindow *w)
{
    if (mouse.x >= 390 && mouse.x <= 634 && \
        mouse.y >= 250 && mouse.y <= 341)
        r->page = 2;
    if (mouse.x >= 390 && mouse.x <= 634 && \
        mouse.y >= 510 && mouse.y <= 601)
        sfRenderWindow_close(w);
    if (mouse.x >= 390 && mouse.x <= 634 && \
        mouse.y >= 380 && mouse.y <= 471)
        r->page = 1;
}

void	check_player(rpg_t *r, sfMouseButtonEvent mouse)
{
    if (mouse.x >= 50 && mouse.x <= 185 && \
        mouse.y >= 50 && mouse.y <= 185) {
        r->p->choose_player = 1;
    }
    if (mouse.x >= 920 && mouse.x <= 1055 && \
        mouse.y >= 50 && mouse.y <= 185)
        r->p->choose_player = 2;
}

void	player_chosen(rpg_t *r)
{
    switch (r->p->choose_player) {
    case (1):
        r->p->my_sprite = sfSprite_copy(r->p->sprite);
        sfText_setPosition(r->t->player, set_position(50, 190));
        r->a = 3;
        break;
    case (2):
        r->p->my_sprite = sfSprite_copy(r->p->sprite2);
        sfText_setPosition(r->t->player, set_position(920, 190));
        r->a = 2;
        break;
    }
}

void	change_page(rpg_t *r, sfEvent event, sfRenderWindow *w)
{
    sfMouseButtonEvent m = event.mouseButton;

    if (event.type == sfEvtMouseButtonReleased) {
        if (r->page == 1)
            play_button(m, r, w);
        if (r->page == 7) {
            check_player(r, m);
            player_chosen(r);
        }
        if (r->page == 4) {
            pause_button(m, r, w);
        }
    }
}
