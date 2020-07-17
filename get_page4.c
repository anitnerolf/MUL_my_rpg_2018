/*
** EPITECH PROJECT, 2019
** dfghj
** File description:
** ghj
*/

#include "my.h"

void	case_5(sfRenderWindow *w, rpg_t *r)
{
    sfRenderWindow_clear(w, sfBlue);
    r->rect.top = 0;
    r->rect.left = 0;
    sfView_reset(r->view, r->rect);
    sfRenderWindow_setView(w, r->view);
    sfRenderWindow_drawSprite(w, r->p->loser, NULL);
}

void	other_sprites(play_t *p)
{
    p->scale.x = 2.0;
    p->scale.y = 2.0;
    p->loser_tx = sfTexture_createFromFile("assets/loser.png", NULL);
    p->loser = sfSprite_create();
    sfSprite_setScale(p->loser, p->scale);
    sfSprite_setTexture(p->loser, p->loser_tx, sfTrue);
    sfSprite_setPosition(p->loser, set_position(100, 100));
    p->winner_tx = sfTexture_createFromFile("assets/you_won.jpg", NULL);
    p->winner = sfSprite_create();
    sfSprite_setTexture(p->winner, p->winner_tx, sfTrue);
    sfSprite_setPosition(p->winner, set_position(100, 50));
    p->scale2.x = 0.5;
    p->scale2.y = 0.5;
    p->bomb_tx = sfTexture_createFromFile("assets/bombaaa.png", NULL);
    p->bomb = sfSprite_create();
    sfSprite_setScale(p->bomb, p->scale2);
    sfSprite_setTexture(p->bomb, p->bomb_tx, sfTrue);
    sfSprite_setPosition(p->bomb, set_position(30, 100));
}

void	fam_player(play_t *p)
{
    p->f1_tx = sfTexture_createFromFile("assets/fam1.png", NULL);
    p->f1 = sfSprite_create();
    sfSprite_setTexture(p->f1, p->f1_tx, sfTrue);
    p->f2_tx = sfTexture_createFromFile("assets/fam2.png", NULL);
    p->f2 = sfSprite_create();
    sfSprite_setTexture(p->f2, p->f2_tx, sfTrue);
    p->f3_tx = sfTexture_createFromFile("assets/fam3.png", NULL);
    p->f3 = sfSprite_create();
    sfSprite_setTexture(p->f3, p->f3_tx, sfTrue);
    p->f4_tx = sfTexture_createFromFile("assets/fam4.png", NULL);
    p->f4 = sfSprite_create();
    sfSprite_setTexture(p->f4, p->f4_tx, sfTrue);
    p->f5_tx = sfTexture_createFromFile("assets/fam5.png", NULL);
    p->f5 = sfSprite_create();
    sfSprite_setTexture(p->f5, p->f5_tx, sfTrue);
}

void	other_players(play_t *p)
{
    p->texture2 = sfTexture_createFromFile("assets/girl_rpg.png", NULL);
    p->sprite2 = sfSprite_create();
    sfSprite_setTexture(p->sprite2, p->texture2, sfTrue);
    sfSprite_setTextureRect(p->sprite2, p->rect);
    sfSprite_setPosition(p->sprite2, p->offset);
    p->clock = sfClock_create();
    fam_player(p);
}

void	play_rect(play_t *info)
{
    info->rect.top = 0;
    info->rect.left = 0;
    info->rect.height = 40;
    info->rect.width = 40;
    info->offset.x = 80;
    info->offset.y = 80;
    info->right_off.x = 40;
    info->right_off.y = 0;
    info->left_off.x = -40;
    info->left_off.y = 0;
    info->up_off.x = 0;
    info->up_off.y = -40;
    info->down_off.x = 0;
    info->down_off.y = 40;
}
