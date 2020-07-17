/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** main
*/

#include "my.h"

void	first_rpg(rpg_t *r)
{
    r->rect.top = 0;
    r->rect.left = 0;
    r->rect.height = r->screen_y;
    r->rect.width = r->screen_x;
    r->rect1.top = 0;
    r->rect1.left = 0;
    r->rect1.height = 1.0;
    r->rect1.width = 1.0;
    r->b = begin();
    r->t = my_texts();
    r->m = my_menu();
    r->s = sound_type();
    r->f = bomb(r);
    r->position.x = 0;
    r->position.y = 0;
    r->view = sfView_create();
    sfView_reset(r->view, r->rect);
    sfView_setViewport(r->view, r->rect1);
    sfView_setCenter(r->view, set_position(550, 400));
}

void	second_rpg(rpg_t *r)
{
    r->page = 0;
    r->score = 0;
    r->member = 0;
    r->a = 3;
    r->screen_x = 1100;
    r->screen_y = 800;
    r->score_font = sfFont_createFromFile("assets/text/fam_font.ttf");
    r->score_text = sfText_create();
    r->the_score = int_to_array(r->score);
    r->p = my_create();
    sfText_setString(r->score_text, r->the_score);
    sfText_setFont(r->score_text, r->score_font);
    sfText_setColor(r->score_text, sfWhite);
    sfText_setPosition(r->score_text, set_position(15, 15));
    sfText_setCharacterSize(r->score_text, 55);
}

rpg_t	*my_rpg(char **av)
{
    rpg_t	*r = malloc(sizeof(rpg_t));

    r->k = double_array(read_file(av[1]), '\n');
    second_rpg(r);
    r->bomb_text = sfText_create();
    r->bomb_count = int_to_array(r->a);
    sfText_setString(r->bomb_text, r->bomb_count);
    sfText_setFont(r->bomb_text, r->score_font);
    sfText_setColor(r->bomb_text, sfWhite);
    sfText_setPosition(r->bomb_text, set_position(100, 15));
    sfText_setCharacterSize(r->bomb_text, 55);
    r->memb = sfText_create();
    r->memb_count = int_to_array(r->member);
    sfText_setString(r->memb, r->memb_count);
    sfText_setFont(r->memb, r->score_font);
    sfText_setColor(r->memb, sfWhite);
    sfText_setPosition(r->memb, set_position(480, 500));
    sfText_setCharacterSize(r->memb, 55);
    first_rpg(r);
    return (r);
}

int	before_main(int ac, char **av)
{
    sfRenderWindow	*window;

    if (av[1][0] == '-' && av[1][1] == 'h') {
        print_usage();
    } else {
        if (read_file(av[1]) != NULL) {
            window = create_my_window(1100, 800);
            sfRenderWindow_setFramerateLimit(window, FPS);
            display_window(window, av);
            return (0);
        } else
            return (84);
    }
}

int	main(int ac, char **av)
{
    if (ac == 2) {
        return (before_main(ac, av));
    } else
        return (84);
}
