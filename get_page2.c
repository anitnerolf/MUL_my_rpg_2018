/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** fg
*/

#include "my.h"

void	case2_6(sfRenderWindow *w, rpg_t *r)
{
    sfRenderWindow_clear(w, sfMagenta);
    r->rect.top = 0;
    r->rect.left = 0;
    sfView_reset(r->view, r->rect);
    sfRenderWindow_setView(w, r->view);
    sfRenderWindow_drawSprite(w, r->b->back_sp, NULL);
    r->the_score = int_to_array(r->score);
    sfText_setString(r->score_text, r->the_score);
    sfRenderWindow_drawText(w, r->score_text, NULL);
    r->bomb_count = int_to_array(r->a);
    sfText_setString(r->bomb_text, r->bomb_count);
    sfText_setColor(r->score_text, sfBlack);
    sfText_setColor(r->bomb_text, sfBlack);
    r->memb_count = int_to_array(r->member);
    sfRenderWindow_drawText(w, r->t->back_text, NULL);
}

void	case_7(sfRenderWindow *w, rpg_t *r)
{
    sfRenderWindow_clear(w, sfYellow);
    sfRenderWindow_drawSprite(w, r->m->grass_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->p_sp, NULL);
    sfRenderWindow_drawText(w, r->t->cpl, NULL);
    sfRenderWindow_drawText(w, r->t->tpl, NULL);
    sfRenderWindow_drawText(w, r->t->player, NULL);
    sfRenderWindow_drawSprite(w, r->m->mygirl_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->myboy_sp, NULL);
}

void	case_8(sfRenderWindow *w, rpg_t *r)
{
    sfRenderWindow_clear(w, sfBlue);
    r->rect.top = 0;
    r->rect.left = 0;
    sfView_reset(r->view, r->rect);
    sfRenderWindow_setView(w, r->view);
    sfRenderWindow_drawSprite(w, r->b->win_sp, NULL);
}

void	switch_page2(sfRenderWindow *w, rpg_t *r)
{
    switch (r->page) {
    case (6):
        case2_6(w, r);
        case_6(w, r);
        break;
    case (7):
        case_7(w, r);
        break;
    case (8):
        case_8(w, r);
        break;
    }
}

void	switch_page(sfRenderWindow *w, rpg_t *r)
{
    switch (r->page) {
    case (1):
        case_1(w, r);
        break;
    case (2):
        case2_2(w, r);
        case_2(w, r);
        break;
    case (3):
        sfRenderWindow_clear(w, sfBlack);
        sfRenderWindow_drawSprite(w, r->b->htp_sp, NULL);
        break;
    case (4):
        case_4(w, r);
        break;
    case (5):
        case_5(w, r);
        break;
    }
    switch_page2(w, r);
}
