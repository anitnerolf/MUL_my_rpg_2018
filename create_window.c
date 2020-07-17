/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** window
*/

#include "my.h"

void	second_event(sfEvent event, rpg_t *r)
{
    third_event(event, r);
    if (event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyI) {
        if (r->page == 2) {
            r->page = 6;
        }
    }
    if (r->page == 6 && event.type == sfEvtKeyPressed \
    && event.key.code == sfKeyB)
        r->page = 2;
}

void	second_page(sfEvent event, rpg_t *r)
{
    if (r->page == 2) {
        check_move(r, event);
        if (event.type == sfEvtKeyPressed && \
    (event.key.code == sfKeyDown || \
    event.key.code == sfKeyUp || \
    event.key.code == sfKeyLeft || \
    event.key.code == sfKeyRight)) {
            player_animation(r);
            sfSound_play(r->s->run);
        }
    }
    if (r->page == 3) {
        if (event.type == sfEvtKeyPressed && \
            event.key.code == sfKeyL)
            r->page = 1;
    }

}

void	first_event(sfEvent event, sfRenderWindow *window, \
    rpg_t *r)
{
    if (event.type == sfEvtClosed || \
    (event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyQ))
        sfRenderWindow_close(window);
    if (r->page == 0) {
        if (event.type == sfEvtKeyPressed && \
            event.key.code == sfKeyS) {
            r->page = 1;
        }
    }
    second_page(event, r);
    second_event(event, r);
}

void	about_view(sfRenderWindow *w, rpg_t *r)
{
    r->position.x = sfSprite_getPosition(r->p->my_sprite).x + 20 - \
        (r->screen_x / 2);
    r->position.y = sfSprite_getPosition(r->p->my_sprite).y + 20 - \
        (r->screen_y / 2);
    if (r->position.x < 0)
        r->position.x = 0;
    if (r->position.y < 0)
        r->position.y = 0;
    r->rect.left = r->position.x;
    r->rect.top = r->position.y;
    sfView_reset(r->view, r->rect);
    sfRenderWindow_setView(w, r->view);
    sfText_setPosition(r->score_text, \
    set_position(r->position.x + 160, r->position.y + 12));
    sfText_setPosition(r->t->b_text, \
    set_position(r->position.x + 400, r->position.y + 15));
    sfText_setPosition(r->t->time_text, \
    set_position(r->position.x + 10, r->position.y + 15));
    sfText_setPosition(r->bomb_text, \
    set_position(r->position.x + 600, r->position.y + 12));
}

void	close_window(sfRenderWindow *window, rpg_t *r)
{
    sfEvent	event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        pause_state(event, r);
        set_cursor(r, event);
        change_page(r, event, window);
        first_event(event, window, r);
        if (event.type == sfEvtMouseButtonPressed)
            sfSound_play(r->s->click);
    }
    about_view(window, r);
}
