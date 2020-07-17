/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** fg
*/

#include "my.h"

void	case_1(sfRenderWindow *w, rpg_t *r)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(w, r->m->grass_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->play_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->famtime_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->opt_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->quit_sp, NULL);
    sfRenderWindow_drawText(w, r->t->fm_time, NULL);
    sfRenderWindow_drawText(w, r->t->play, NULL);
    sfRenderWindow_drawText(w, r->t->quit, NULL);
    sfRenderWindow_drawText(w, r->t->opt, NULL);
}

void	case2_2(sfRenderWindow *w, rpg_t *r)
{
    sfRenderWindow_clear(w, sfBlack);
    print_map(r, w);
    r->i++;
    if (r->i % 120 == 0)
        r->score++;
    if (r->score > 200) {
        sfSound_play(r->s->gameover);
        r->page = 5;
    }
}

void	case_2(sfRenderWindow *w, rpg_t *r)
{
    r->the_score = int_to_array(r->score);
    sfText_setString(r->score_text, r->the_score);
    sfRenderWindow_drawText(w, r->score_text, NULL);
    r->bomb_count = int_to_array(r->a);
    sfText_setColor(r->score_text, sfWhite);
    sfText_setColor(r->bomb_text, sfWhite);
    sfText_setColor(r->t->time_text, sfWhite);
    sfText_setColor(r->t->b_text, sfWhite);
    sfText_setString(r->bomb_text, r->bomb_count);
    sfRenderWindow_drawText(w, r->score_text, NULL);
    sfRenderWindow_drawText(w, r->bomb_text, NULL);
    sfRenderWindow_drawSprite(w, r->p->my_sprite, NULL);
    sfRenderWindow_drawText(w, r->t->time_text, NULL);
    sfRenderWindow_drawText(w, r->t->b_text, NULL);
    animation_bomb(r->f);
    sfRenderWindow_drawSprite(w, r->f->sp, NULL);
}

void	case_4(sfRenderWindow *w, rpg_t *r)
{
    sfRenderWindow_clear(w, sfBlack);
    r->rect.top = 0;
    r->rect.left = 0;
    sfView_reset(r->view, r->rect);
    sfRenderWindow_setView(w, r->view);
    sfRenderWindow_drawSprite(w, r->m->pause_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->pause1_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->pause2_sp, NULL);
    sfRenderWindow_drawSprite(w, r->m->pause3_sp, NULL);
    sfRenderWindow_drawText(w, r->t->pause_quit, NULL);
    sfRenderWindow_drawText(w, r->t->resume_text, NULL);
    sfRenderWindow_drawText(w, r->t->pause_menu, NULL);
}

void	case_6(sfRenderWindow *w, rpg_t *r)
{
    sfText_setString(r->memb, r->memb_count);
    sfText_setColor(r->memb, sfBlack);
    sfText_setColor(r->t->time_text, sfBlack);
    sfText_setColor(r->t->b_text, sfBlack);
    sfText_setCharacterSize(r->score_text, 65);
    sfText_setCharacterSize(r->bomb_text, 65);
    sfText_setPosition(r->bomb_text, set_position(300, 170));
    sfText_setPosition(r->score_text, set_position(170, 15));
    sfText_setPosition(r->t->time_text, set_position(20, 20));
    sfText_setPosition(r->t->b_text, set_position(350, 180));
    sfRenderWindow_drawText(w, r->score_text, NULL);
    sfRenderWindow_drawText(w, r->bomb_text, NULL);
    sfRenderWindow_drawText(w, r->t->time_text, NULL);
    sfRenderWindow_drawText(w, r->t->b_text, NULL);
    sfRenderWindow_drawText(w, r->t->mem1, NULL);
    sfRenderWindow_drawText(w, r->t->mem2, NULL);
    sfRenderWindow_drawText(w, r->memb, NULL);
    sfRenderWindow_drawSprite(w, r->m->mem_sp, NULL);
    sfRenderWindow_drawSprite(w, r->p->bomb, NULL);
    sfRenderWindow_drawSprite(w, r->m->mem_sp, NULL);
}
