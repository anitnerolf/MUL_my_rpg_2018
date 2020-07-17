/*
** EPITECH PROJECT, 2019
** destroy
** File description:
** rpg
*/

#include "my.h"

static	void	destroy_sound(rpg_t *r)
{
    sfSoundBuffer_destroy(r->s->soundbuffer);
    sfSoundBuffer_destroy(r->s->click_buffer);
    sfSoundBuffer_destroy(r->s->games_buffer);
    sfSoundBuffer_destroy(r->s->run_buffer);
    sfSoundBuffer_destroy(r->s->bomb_s_buffer);
    sfSoundBuffer_destroy(r->s->gameover_buffer);
    sfSoundBuffer_destroy(r->s->win_buffer);
    sfSound_destroy(r->s->sound);
    sfSound_destroy(r->s->click);
    sfSound_destroy(r->s->games);
    sfSound_destroy(r->s->run);
    sfSound_destroy(r->s->bomb_sound);
    sfSound_destroy(r->s->gameover);
    sfSound_destroy(r->s->win);
}

void	destroy_all(rpg_t *r)
{
    destroy_sound(r);
}
