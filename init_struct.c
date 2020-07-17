/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_struct
*/

#include "my.h"

void	other_texts2(text_t *x)
{
    x->back_text = sfText_copy(x->zero_text);
    sfText_setString(x->back_text, "PRESS   B  TO GO BACK");
    sfText_setFont(x->back_text, x->font);
    sfText_setColor(x->back_text, sfBlack);
    sfText_setPosition(x->back_text, set_position(230, 650));
    sfText_setCharacterSize(x->back_text, 55);
    x->player = sfText_copy(x->zero_text);
    sfText_setString(x->player, "YOUR PLAYER");
    sfText_setFont(x->player, x->font);
    sfText_setColor(x->player, sfBlue);
    sfText_setCharacterSize(x->player, 25);
}

void	to_begin(begin_t *b)
{
    b->win_tx = sfTexture_createFromFile("assets/win_b.png", NULL);
    b->win_sp = sfSprite_create();
    sfSprite_setTexture(b->win_sp, b->win_tx, sfTrue);
    b->htp_tx = sfTexture_createFromFile("assets/htp.png", NULL);
    b->htp_sp = sfSprite_create();
    sfSprite_setTexture(b->htp_sp, b->htp_tx, sfTrue);
    b->back_tx = sfTexture_createFromFile("assets/back_tx.png", NULL);
    b->back_sp = sfSprite_create();
    sfSprite_setTexture(b->back_sp, b->back_tx, sfTrue);
}

begin_t	*begin(void)
{
    begin_t	*b = malloc(sizeof(begin_t));

    b->pos = 800;
    b->family_tx = sfTexture_createFromFile("assets/family.jpg", NULL);
    b->family_sp = sfSprite_create();
    sfSprite_setTexture(b->family_sp, b->family_tx, sfTrue);
    b->intro_tx = sfTexture_createFromFile("assets/intro.png", NULL);
    b->intro_sp = sfSprite_create();
    sfSprite_setTexture(b->intro_sp, b->intro_tx, sfTrue);
    sfSprite_setPosition(b->intro_sp, set_position(115, b->pos));
    b->tile_tx = sfTexture_createFromFile("assets/tiles.png", NULL);
    b->tile = sfSprite_create();
    sfSprite_setTexture(b->tile, b->tile_tx, sfTrue);
    b->btile_tx = sfTexture_createFromFile("assets/tile1.png", NULL);
    b->btile = sfSprite_create();
    sfSprite_setTexture(b->btile, b->btile_tx, sfTrue);
    to_begin(b);
    return (b);
}

bomb_t	*bomb(rpg_t *r)
{
    bomb_t	*b = malloc(sizeof(bomb_t));

    b->clock = sfClock_create();
    b->rect.top = 130;
    b->rect.left = 0;
    b->rect.height = 130;
    b->rect.width = 130;
    b->scale.x = 0.5;
    b->scale.y = 0.5;
    b->tx = sfTexture_createFromFile("assets/bomb.png", NULL);
    b->sp = sfSprite_create();
    sfSprite_setScale(b->sp, b->scale);
    sfSprite_setTexture(b->sp, b->tx, sfTrue);
    sfSprite_setPosition(b->sp, \
    set_position(sfSprite_getPosition(r->p->my_sprite).x + 80, \
    sfSprite_getPosition(r->p->my_sprite).y));
    sfSprite_setTextureRect(b->sp, b->rect);
    return (b);
}

void	print_usage(void)
{
    my_putstr("USAGE:\n\t./my_rpg map.txt -- To start game.\n");
    my_putstr("\n\t./my_rpg -h -- To print usage.\n");
    my_putstr("\n    GO TO OPTIONS FOR MORE INFORMATIONS!\n");
}
