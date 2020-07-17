/*
** EPITECH PROJECT, 2019
** fgh
** File description:
** hj
*/

#include "my.h"

static	void	first_sound(sound_t *s)
{
    s->run_buffer = \
    sfSoundBuffer_createFromFile("assets/sound/run.wav");
    s->run = sfSound_create();
    sfSound_setBuffer(s->run, s->run_buffer);
    sfSound_setVolume(s->run, 50);
    s->bomb_s_buffer = \
    sfSoundBuffer_createFromFile("assets/sound/bomb_sound.wav");
    s->bomb_sound = sfSound_create();
    sfSound_setBuffer(s->bomb_sound, s->bomb_s_buffer);
    sfSound_setVolume(s->bomb_sound, 50);
    s->soundbuffer = \
    sfSoundBuffer_createFromFile("assets/sound/sound.wav");
    s->sound = sfSound_create();
    sfSound_setBuffer(s->sound, s->soundbuffer);
    sfSound_play(s->sound);
    sfSound_setLoop(s->sound, sfTrue);
    sfSound_setVolume(s->sound, 10);
}

static	void	second_sound(sound_t *s)
{
    s->click_buffer = \
    sfSoundBuffer_createFromFile("assets/sound/click.wav");
    s->click = sfSound_create();
    sfSound_setBuffer(s->click, s->click_buffer);
    sfSound_setVolume(s->click, 50);
    s->games_buffer = \
    sfSoundBuffer_createFromFile("assets/sound/x.wav");
    s->games = sfSound_create();
    sfSound_setBuffer(s->games, s->games_buffer);
    sfSound_setVolume(s->games, 50);
    s->gameover_buffer = \
    sfSoundBuffer_createFromFile("assets/sound/gameover.wav");
    s->gameover = sfSound_create();
    sfSound_setBuffer(s->gameover, s->gameover_buffer);
    sfSound_setVolume(s->gameover, 50);
    s->win_buffer = \
    sfSoundBuffer_createFromFile("assets/sound/win.wav");
    s->win = sfSound_create();
    sfSound_setBuffer(s->win, s->win_buffer);
    sfSound_setVolume(s->win, 50);
}

sound_t	*sound_type(void)
{
    sound_t	*s = malloc(sizeof(sound_t));

    second_sound(s);
    first_sound(s);
    return (s);
}
