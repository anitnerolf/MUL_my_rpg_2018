/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** jkl
*/

#include "my.h"

void	pause_state(sfEvent event, rpg_t *r)
{
    if (r->page == 2) {
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
            r->page = 4;
    }
}

void	pause_button1(sfMouseMoveEvent mouse1, menu_t *m,       \
    sfMouseButtonEvent mouse)
{
    if (mouse1.x >= 390 && mouse1.x <= 634 && \
    mouse1.y >= 250 && mouse1.y <= 341)
        m->rect.left = 244;
    else if (mouse.x >= 390 && mouse.x <= 634 && \
    mouse.y >= 250 && mouse.y <= 341)
        m->rect.left = 488;
    else
        m->rect.left = 0;
    sfSprite_setTextureRect(m->pause1_sp, m->rect);
}

void	pause_button2(sfMouseMoveEvent mouse1, menu_t *m, \
    sfMouseButtonEvent mouse)
{
    if (mouse1.x >= 390 && mouse1.x <= 634 && \
    mouse1.y >= 380 && mouse1.y <= 471)
        m->rect.left = 244;
    else if (mouse.x >= 390 && mouse.x <= 634 && \
    mouse.y >= 380 && mouse.y <= 471)
        m->rect.left = 488;
    else
        m->rect.left = 0;
    sfSprite_setTextureRect(m->pause2_sp, m->rect);
}

void	pause_button3(sfMouseMoveEvent mouse1, menu_t *m, \
    sfMouseButtonEvent mouse)
{
    if (mouse1.x >= 390 && mouse1.x <= 634 && \
    mouse1.y >= 510 && mouse1.y <= 601)
        m->rect.left = 244;
    else if (mouse.x >= 390 && mouse.x <= 634 && \
    mouse.y >= 510 && mouse.y <= 601)
        m->rect.left = 488;
    else
        m->rect.left = 0;
    sfSprite_setTextureRect(m->pause3_sp, m->rect);
}
