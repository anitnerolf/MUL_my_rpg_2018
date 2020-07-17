/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** ghj
*/

#include "my.h"

void	switch_char4(rpg_t *r, sfRenderWindow *w, int i, int j)
{
    switch (r->k[j][i]) {
    case ('5'):
        sfSprite_setPosition(r->b->tile, \
    set_position(i * 40, j * 40));
        sfSprite_setPosition(r->p->f5, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->tile, NULL);
        sfRenderWindow_drawSprite(w, r->p->f5, NULL);
        break;
    case ('h'):
        sfSprite_setPosition(r->m->home_sp, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->m->home_sp, NULL);
        break;
    }
    member_found(r);
}

void	switch_char3(rpg_t *r, sfRenderWindow *w, int i, int j)
{
    switch (r->k[j][i]) {
    case ('3'):
        sfSprite_setPosition(r->b->tile, \
    set_position(i * 40, j * 40));
        sfSprite_setPosition(r->p->f3, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->tile, NULL);
        sfRenderWindow_drawSprite(w, r->p->f3, NULL);
        break;
    case ('4'):
        sfSprite_setPosition(r->b->tile, \
    set_position(i * 40, j * 40));
        sfSprite_setPosition(r->p->f4, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->tile, NULL);
        sfRenderWindow_drawSprite(w, r->p->f4, NULL);
        break;
    }
    switch_char4(r, w, i, j);
}

void	switch_char2(rpg_t *r, sfRenderWindow *w, int i, int j)
{
    switch (r->k[j][i]) {
    case ('1'):
        sfSprite_setPosition(r->b->tile, \
    set_position(i * 40, j * 40));
        sfSprite_setPosition(r->p->f1, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->tile, NULL);
        sfRenderWindow_drawSprite(w, r->p->f1, NULL);
        break;
    case ('2'):
        sfSprite_setPosition(r->b->tile, \
    set_position(i * 40, j * 40));
        sfSprite_setPosition(r->p->f2, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->tile, NULL);
        sfRenderWindow_drawSprite(w, r->p->f2, NULL);
        break;
    }
    switch_char3(r, w, i, j);
}

void	switch_char(rpg_t *r, sfRenderWindow *w, int i, int j)
{
    switch (r->k[j][i]) {
    case ('*'):
        sfSprite_setPosition(r->b->tile, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->tile, NULL);
        break;
    case ('X'):
        sfSprite_setPosition(r->b->btile, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->btile, NULL);
        break;
    case ('d'):
        sfSprite_setPosition(r->b->btile, \
    set_position(i * 40, j * 40));
        sfRenderWindow_drawSprite(w, r->b->btile, NULL);
        break;
    }
    switch_char2(r, w, i, j);
}
