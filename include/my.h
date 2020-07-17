/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** my_h
*/

#ifndef	MY_H_
#define MY_H_

#define FPS (75)
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <math.h>

typedef	struct	rpg
{
    int	page;
    char	**k;
    int	member;
    struct	begin	*b;
    struct	text	*t;
    struct	menu	*m;
    struct	play	*p;
    struct	sound	*s;
    struct	bomb	*f;
    int	a;
    int	i;
    int	score;
    int	screen_x;
    int	screen_y;
    sfVector2f	position;
    sfView	*view;
    sfFloatRect	rect;
    sfFloatRect	rect1;
    sfFont	*score_font;
    sfText	*score_text;
    sfText	*bomb_text;
    char	*the_score;
    char	*bomb_count;
    sfText	*memb;
    char	*memb_count;
}	rpg_t;

typedef	struct	sound
{
    sfSound	*sound;
    sfSoundBuffer	*soundbuffer;
    sfSound	*click;
    sfSoundBuffer	*click_buffer;
    sfSound	*games;
    sfSoundBuffer	*games_buffer;
    sfSound	*run;
    sfSoundBuffer	*run_buffer;
    sfSound	*bomb_sound;
    sfSoundBuffer	*bomb_s_buffer;
    sfSound	*gameover;
    sfSoundBuffer	*gameover_buffer;
    sfSound	*win;
    sfSoundBuffer	*win_buffer;
}	sound_t;

typedef	struct	play
{
    int	choose_player;
    int	check;
    sfIntRect	rect;
    sfTexture	*texture;
    sfSprite	*sprite;
    sfTexture	*texture2;
    sfSprite	*sprite2;
    sfTexture	*loser_tx;
    sfSprite	*loser;
    sfTexture	*winner_tx;
    sfSprite	*winner;
    sfTexture	*f1_tx;
    sfSprite	*f1;
    sfTexture	*f2_tx;
    sfSprite	*f2;
    sfTexture	*f3_tx;
    sfSprite	*f3;
    sfTexture	*f4_tx;
    sfSprite	*f4;
    sfTexture	*f5_tx;
    sfSprite	*f5;
    sfClock	*clock;
    sfTime	time;
    float	second;
    sfVector2f	offset;
    sfVector2f	right_off;
    sfVector2f	left_off;
    sfVector2f	down_off;
    sfVector2f	up_off;
    sfVector2f	scale;
    sfVector2f	scale2;
    sfTexture	*bomb_tx;
    sfSprite	*bomb;
    sfSprite	*my_sprite;
}	play_t;


typedef	struct	bomb
{
    sfTexture	*bomb_t;
    sfSprite	*bomb_s;
    sfSprite	*sp;
    sfTexture	*tx;
    sfIntRect	rect;
    sfTime	time;
    float	seconds;
    sfClock	*clock;
    int	a;
    char	*boom;
    sfText	*bomb_number;
    sfVector2f	scale;
}	bomb_t;

typedef	struct	double_str
{
    int i;
    int j;
    int k;
}	double_str_t;

typedef	struct	begin
{
    sfTexture	*family_tx;
    sfSprite	*family_sp;
    sfTexture	*htp_tx;
    sfSprite	*htp_sp;
    int	pos;
    sfSprite	*intro_sp;
    sfTexture	*intro_tx;
    sfTexture	*tile_tx;
    sfSprite	*tile;
    sfSprite	*btile;
    sfTexture	*btile_tx;
    sfSprite	*win_sp;
    sfTexture	*win_tx;
    sfTexture	*back_tx;
    sfSprite	*back_sp;
}	begin_t;

typedef	struct	menu
{
    sfTexture	*play_tx;
    sfSprite	*play_sp;
    sfTexture	*myboy_tx;
    sfSprite	*myboy_sp;
    sfTexture	*mygirl_tx;
    sfSprite	*mygirl_sp;
    sfSprite	*quit_sp;
    sfSprite	*opt_sp;
    sfTexture	*quit_tx;
    sfTexture	*opt_tx;
    sfTexture	*grass_tx;
    sfSprite	*grass_sp;
    sfTexture	*famtime_tx;
    sfSprite	*famtime_sp;
    sfSprite	*pause1_sp;
    sfSprite	*pause2_sp;
    sfSprite	*pause3_sp;
    sfTexture	*pause_tx;
    sfSprite	*pause_sp;
    sfSprite	*mem_sp;
    sfTexture	*mem_tx;
    sfIntRect	rect;
    sfIntRect	rect1;
    sfVector2f	scale;
    sfVector2f	scale2;
    sfTexture	*p_tx;
    sfSprite	*p_sp;
    sfSprite	*home_sp;
    sfTexture	*home_tx;
}	menu_t;

typedef	struct	text
{
    sfFont	*font;
    sfText	*zero_text;
    sfText	*play;
    sfText	*quit;
    sfText	*opt;
    sfFont	*font1;
    sfText	*fm_time;
    sfText	*resume_text;
    sfText	*pause_quit;
    sfText	*pause_menu;
    sfText	*time_text;
    sfText	*b_text;
    sfText	*mem1;
    sfText	*mem2;
    sfText	*memb;
    sfText	*cpl;
    sfText	*tpl;
    sfText	*back_text;
    sfText	*player;
}	text_t;

sfRenderWindow	*create_my_window(unsigned int, \
    unsigned int);
sfVector2f	set_position(int, int);
void	my_putchar(char);
void	display_window(sfRenderWindow *, char **);
void	usage_h(void);
int	my_putstr(char const *);
begin_t	*begin(void);
menu_t	*my_menu(void);
void	close_window(sfRenderWindow *, rpg_t *);
void	first_button(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	pause_button1(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	pause_button2(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	pause_button3(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	second_button(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	third_button(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	book_button(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	htp_button(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
void	start_button(sfMouseMoveEvent, menu_t *, \
    sfMouseButtonEvent);
text_t	*my_texts(void);
void	change_page(rpg_t *, sfEvent , sfRenderWindow *);
void	how_to_play_page(sfRenderWindow *, rpg_t *);
bomb_t	*bomb(rpg_t *);
void	move_down(rpg_t *, sfEvent);
void	move_left(rpg_t *, sfEvent);
void	move_right(rpg_t *, sfEvent);
void	move_up(rpg_t *, sfEvent);
play_t	*my_create(void);
void	my_create2(play_t *);
void	my_create3(play_t *);
void	my_create4(play_t *);
void	move_game(sfRenderWindow *w, play_t *info);
void	move_game2(sfRenderWindow *w, play_t *info, rpg_t *);
void	move_game3(sfRenderWindow *w, play_t *info);
int	check_column(char *, char);
int	count_words(char *, char);
void	print_map(rpg_t *, sfRenderWindow *);
char	**double_array(char *, char);
char	*read_file(char *);
void	bomb_active(sfMouseButtonEvent, rpg_t *);
sfVector2f	position_sprite(int, int);
void	animation_bomb(bomb_t *);
void	draw_first_sprites(sfRenderWindow *, rpg_t *);
void	pause_state(sfEvent, rpg_t *);
char	*int_to_array(int);
sound_t	*sound_type(void);
int	my_strlen(char const *);
char	*my_revstr(char *);
void	to_switch1(sfRenderWindow *, rpg_t *);
void	print1_sprite(sfRenderWindow *, rpg_t *);
void	switch_char(rpg_t *, sfRenderWindow *, int, int);
void	switch_page(sfRenderWindow *, rpg_t *);
void	check_move(rpg_t *, sfEvent);
void	player_animation(rpg_t *);
void	bomb_exploded(rpg_t *);
void	third_event(sfEvent, rpg_t *);
void	set_cursor(rpg_t *, sfEvent);
void	you_are_home(rpg_t *);
void	case_1(sfRenderWindow *, rpg_t *);
void	case_2(sfRenderWindow *, rpg_t *);
void	case2_2(sfRenderWindow *, rpg_t *);
void	case_3(sfRenderWindow *, rpg_t *);
void	case_4(sfRenderWindow *, rpg_t *);
void	case_5(sfRenderWindow *, rpg_t *);
void	case_6(sfRenderWindow *, rpg_t *);
void	case2_6(sfRenderWindow *, rpg_t *);
void	case_7(sfRenderWindow *, rpg_t *);
void	case_8(sfRenderWindow *, rpg_t *);
void	play_rect(play_t *);
void	other_players(play_t *);
void	other_sprites(play_t *);
void	member_found(rpg_t *);
void	destroy_all(rpg_t *);
void	other_texts2(text_t *);
void	print_usage(void);
rpg_t	*my_rpg(char **);

#endif /* MY_H */
