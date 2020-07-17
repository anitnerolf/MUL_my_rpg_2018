/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** my_texts
*/

#include "my.h"

static	void	other_texts(text_t *x)
{
    x->time_text = sfText_copy(x->zero_text);
    sfText_setString(x->time_text, "TIME->");
    sfText_setFont(x->time_text, x->font);
    sfText_setColor(x->time_text, sfBlack);
    sfText_setPosition(x->time_text, set_position(20, 20));
    sfText_setCharacterSize(x->time_text, 55);
    x->b_text = sfText_copy(x->zero_text);
    sfText_setString(x->b_text, "BOMBS");
    sfText_setFont(x->b_text, x->font);
    sfText_setColor(x->b_text, sfBlack);
    sfText_setPosition(x->b_text, set_position(350, 180));
    sfText_setCharacterSize(x->b_text, 55);
    x->mem1 = sfText_copy(x->zero_text);
    sfText_setString(x->mem1, "YOU FOUND");
    sfText_setFont(x->mem1, x->font);
    sfText_setColor(x->mem1, sfBlack);
    sfText_setPosition(x->mem1, set_position(200, 500));
    sfText_setCharacterSize(x->mem1, 55);
}

static	void	third_text(text_t *x)
{
    other_texts(x);
    x->mem2 = sfText_copy(x->zero_text);
    sfText_setString(x->mem2, "MEMBERS");
    sfText_setFont(x->mem2, x->font);
    sfText_setColor(x->mem2, sfBlack);
    sfText_setPosition(x->mem2, set_position(550, 500));
    sfText_setCharacterSize(x->mem2, 55);
    x->cpl = sfText_copy(x->zero_text);
    sfText_setString(x->cpl, "CHOOSE YOUR PLAYER!");
    sfText_setFont(x->cpl, x->font);
    sfText_setColor(x->cpl, sfBlue);
    sfText_setPosition(x->cpl, set_position(320, 60));
    sfText_setCharacterSize(x->cpl, 55);
    x->tpl = sfText_copy(x->zero_text);
    sfText_setString(x->tpl, "PRESS  P  TO START GAME");
    sfText_setFont(x->tpl, x->font);
    sfText_setColor(x->tpl, sfBlue);
    sfText_setPosition(x->tpl, set_position(320, 700));
    sfText_setCharacterSize(x->tpl, 55);
}

static	void	second_text(text_t *x)
{
    x->resume_text = sfText_copy(x->zero_text);
    sfText_setString(x->resume_text, "RESUME");
    sfText_setFont(x->resume_text, x->font);
    sfText_setColor(x->resume_text, sfBlue);
    sfText_setPosition(x->resume_text, set_position(430, 259));
    sfText_setCharacterSize(x->resume_text, 55);
    x->pause_quit = sfText_copy(x->zero_text);
    sfText_setString(x->pause_quit, "QUIT");
    sfText_setFont(x->pause_quit, x->font);
    sfText_setColor(x->pause_quit, sfBlue);
    sfText_setPosition(x->pause_quit, set_position(460, 515));
    sfText_setCharacterSize(x->pause_quit, 60);
    x->pause_menu = sfText_copy(x->zero_text);
    sfText_setString(x->pause_menu, "MENU");
    sfText_setFont(x->pause_menu, x->font);
    sfText_setColor(x->pause_menu, sfBlue);
    sfText_setPosition(x->pause_menu, set_position(435, 390));
    sfText_setCharacterSize(x->pause_menu, 60);
    other_texts2(x);
}

static	void	first_text(text_t *x)
{
    x->opt = sfText_copy(x->zero_text);
    sfText_setString(x->opt, "OPTIONS");
    sfText_setFont(x->opt, x->font);
    sfText_setColor(x->opt, sfBlue);
    sfText_setPosition(x->opt, set_position(413, 390));
    sfText_setCharacterSize(x->opt, 55);
    x->quit = sfText_copy(x->zero_text);
    sfText_setString(x->quit, "QUIT");
    sfText_setFont(x->quit, x->font);
    sfText_setColor(x->quit, sfBlue);
    sfText_setPosition(x->quit, set_position(460, 515));
    sfText_setCharacterSize(x->quit, 60);
    x->play = sfText_copy(x->zero_text);
    sfText_setString(x->play, "PLAY");
    sfText_setFont(x->play, x->font);
    sfText_setColor(x->play, sfBlue);
    sfText_setPosition(x->play, set_position(450, 255));
    sfText_setCharacterSize(x->play, 60);
    second_text(x);
}

text_t	*my_texts(void)
{
    text_t	*x = malloc(sizeof(text_t));

    x->font = sfFont_createFromFile("assets/text/23.ttf");
    x->zero_text = sfText_create();
    sfText_setString(x->zero_text, "PRESS 'S' TO SKIP");
    sfText_setFont(x->zero_text, x->font);
    sfText_setColor(x->zero_text, sfBlack);
    sfText_setPosition(x->zero_text, set_position(275, 700));
    sfText_setCharacterSize(x->zero_text, 75);
    x->font1 = sfFont_createFromFile("assets/text/fam_font.ttf");
    x->fm_time = sfText_create();
    sfText_setString(x->fm_time, "FAMILY TIME");
    sfText_setFont(x->fm_time, x->font1);
    sfText_setColor(x->fm_time, sfRed);
    sfText_setPosition(x->fm_time, set_position(305, 10));
    sfText_setCharacterSize(x->fm_time, 75);
    first_text(x);
    third_text(x);
    return (x);
}
