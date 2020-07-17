/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** menu
*/

#include "my.h"

sfVector2f	set_position(int x, int y)
{
    sfVector2f	position;

    position.x = x;
    position.y = y;
    return (position);
}

void	rects(menu_t *m)
{
    m->rect.left = 0;
    m->rect.top = 0;
    m->rect.height = 91;
    m->rect.width = 244;
    m->rect1.left = 0;
    m->rect1.top = 0;
    m->rect1.height = 52;
    m->rect1.width = 0;
    m->scale.x = 2.5;
    m->scale.y = 2.5;
}

void	to_menu2(menu_t *m)
{
    m->pause1_sp = sfSprite_copy(m->play_sp);
    sfSprite_setPosition(m->pause1_sp, set_position(390, 250));
    m->pause2_sp = sfSprite_copy(m->play_sp);
    sfSprite_setPosition(m->pause2_sp, set_position(390, 380));
    m->pause3_sp = sfSprite_copy(m->play_sp);
    sfSprite_setPosition(m->pause3_sp, set_position(390, 510));
    m->pause_tx = sfTexture_createFromFile("assets/pause.png", NULL);
    m->pause_sp = sfSprite_create();
    sfSprite_setTexture(m->pause_sp, m->pause_tx, sfTrue);
    m->mem_tx = sfTexture_createFromFile("assets/mem.png", NULL);
    m->mem_sp = sfSprite_create();
    sfSprite_setTexture(m->mem_sp, m->mem_tx, sfTrue);
    sfSprite_setScale(m->mem_sp, m->scale);
    sfSprite_setPosition(m->mem_sp, set_position(200, 380));
    sfSprite_setTextureRect(m->mem_sp, m->rect1);
    m->p_tx = sfTexture_createFromFile("assets/players.png", NULL);
    m->p_sp = sfSprite_create();
    sfSprite_setTexture(m->p_sp, m->p_tx, sfTrue);
    sfSprite_setPosition(m->p_sp, set_position(-110, 0));
}

void	to_menu(menu_t *m)
{
    to_menu2(m);
    m->myboy_tx = sfTexture_createFromFile("assets/my_boy.png", NULL);
    m->myboy_sp = sfSprite_create();
    sfSprite_setTexture(m->myboy_sp, m->myboy_tx, sfTrue);
    sfSprite_setPosition(m->myboy_sp, set_position(50, 50));
    m->mygirl_tx = sfTexture_createFromFile("assets/my_girl.png", NULL);
    m->mygirl_sp = sfSprite_create();
    sfSprite_setTexture(m->mygirl_sp, m->mygirl_tx, sfTrue);
    sfSprite_setPosition(m->mygirl_sp, set_position(920, 50));
    m->home_tx = sfTexture_createFromFile("assets/tile.png", NULL);
    m->home_sp = sfSprite_create();
    sfSprite_setTexture(m->home_sp, m->home_tx, sfTrue);
    m->famtime_tx = sfTexture_createFromFile("assets/fam_time.png", NULL);
    m->famtime_sp = sfSprite_create();
    sfSprite_setTexture(m->famtime_sp, m->famtime_tx, sfTrue);
    sfSprite_setPosition(m->famtime_sp, set_position(100, 90));
}

menu_t	*my_menu(void)
{
    menu_t	*m = malloc(sizeof(menu_t));

    rects(m);
    m->grass_tx = sfTexture_createFromFile("assets/grass.jpg", NULL);
    m->grass_sp = sfSprite_create();
    sfSprite_setTexture(m->grass_sp, m->grass_tx, sfTrue);
    m->play_tx = sfTexture_createFromFile("assets/button.png", NULL);
    m->play_sp = sfSprite_create();
    sfSprite_setTexture(m->play_sp, m->play_tx, sfTrue);
    sfSprite_setPosition(m->play_sp, set_position(390, 250));
    sfSprite_setTextureRect(m->play_sp, m->rect);
    m->opt_sp = sfSprite_copy(m->play_sp);
    sfSprite_setPosition(m->opt_sp, set_position(390, 380));
    m->quit_sp = sfSprite_copy(m->play_sp);
    sfSprite_setPosition(m->quit_sp, set_position(390, 510));
    to_menu(m);
    return (m);
}
