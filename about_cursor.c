/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** cursor_change
*/

#include "my.h"

void	first_button(sfMouseMoveEvent mouse1, menu_t *m, \
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
    sfSprite_setTextureRect(m->play_sp, m->rect);
}

void	second_button(sfMouseMoveEvent mouse1, menu_t *m, \
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
    sfSprite_setTextureRect(m->opt_sp, m->rect);
}

void	third_button(sfMouseMoveEvent mouse1, menu_t *m, \
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
    sfSprite_setTextureRect(m->quit_sp, m->rect);
}
