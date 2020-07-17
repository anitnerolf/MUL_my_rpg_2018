/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** window
*/

#include "my.h"

sfRenderWindow	*create_my_window(unsigned int width, \
    unsigned int height)
{
    sfRenderWindow	*window;
    sfVideoMode	video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My RPG", \
    sfClose, NULL);
    return (window);
}

void    set_cursor(rpg_t *r, sfEvent event)
{
    sfMouseMoveEvent    mousem = event.mouseMove;
    sfMouseButtonEvent  mouse = event.mouseButton;

    if (event.type == sfEvtMouseMoved || \
    event.type == sfEvtMouseButtonPressed) {
            first_button(mousem, r->m, mouse);
            second_button(mousem, r->m, mouse);
            third_button(mousem, r->m, mouse);
            pause_button1(mousem, r->m, mouse);
            pause_button2(mousem, r->m, mouse);
            pause_button3(mousem, r->m, mouse);
            if (r->page == 4) {
                pause_button1(mousem, r->m, mouse);
                pause_button2(mousem, r->m, mouse);
                pause_button3(mousem, r->m, mouse);
            }
    }
}

void	check_for_bomb1(rpg_t *r)
{
    if (r->p->rect.top == 0)
    sfSprite_setPosition(r->f->sp, \
    set_position(sfSprite_getPosition(r->p->my_sprite).x, \
    sfSprite_getPosition(r->p->my_sprite).y + 40.0));
    if (r->p->rect.top == 40)
    sfSprite_setPosition(r->f->sp, \
    set_position(sfSprite_getPosition(r->p->my_sprite).x - 40.0, \
    sfSprite_getPosition(r->p->my_sprite).y));
}

void	check_for_bomb(rpg_t *r)
{
    check_for_bomb1(r);
    if (r->p->rect.top == 80)
        sfSprite_setPosition(r->f->sp, \
    set_position(sfSprite_getPosition(r->p->my_sprite).x + 40.0, \
    sfSprite_getPosition(r->p->my_sprite).y));
    if (r->p->rect.top == 120)
        sfSprite_setPosition(r->f->sp, \
    set_position(sfSprite_getPosition(r->p->my_sprite).x, \
    sfSprite_getPosition(r->p->my_sprite).y - 40.0));
}

void	third_event(sfEvent event, rpg_t *r)
{
    if (r->page == 2 ) {
        if (r->a != 0 && \
    event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyA) {
            r->f->rect.top = 0;
            check_for_bomb(r);
            sfSprite_setTextureRect(r->f->sp, r->f->rect);
            sfSound_play(r->s->bomb_sound);
            bomb_exploded(r);
            r->a--;
        }
        you_are_home(r);
    }
    if (r->page == 7) {
        if (event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyP)
            r->page = 2;
    }
}
