/*
** EPITECH PROJECT, 2019
** ingame
** File description:
** ingame
*/

#include "my.h"

int start_music(objs *object, int *start)
{
    if ((*start) == 0) {
        sfMusic_play(object->game_music);
    }
    return (1);
}

int start_music_menu(objs *object, int *start)
{
    if ((*start) == 0) {
        sfMusic_play(object->menu_music);
    }
    return (1);
}

void score_and_game(objs *object)
{
    if (object->state != DOWN && object->score < 107 && object->state != DEATH)
        object->score += 0.05;
    if (object->state == DOWN && object->score < 107 && object->state != DEATH)
        object->score += 0.08;
    if (object->score > 100 && object->score < 107 && object->state != JUMP)
        object->state = DOWN;
    if (object->score > 107 && object->state == DOWN)
        object->state = WIN;
    if (object->score > 107 && object->state == RUN)
        object->state = WIN;
    if (check_death(object) != 0 && object->state != DEATH
        && object->state != WIN) {
        object->state = DEATH;
        sfClock_restart(object->clock);
    }
}

void run(float sec, objs *object)
{
    if (sec > 0.080 && object->state == RUN) {
        object->yoshi = animation(object->yoshi);
        sfClock_restart(object->clock);
    }
    if (sec > 0.080 && object->state == DOWN) {
        object->yoshi = run_down(object->yoshi);
        sfClock_restart(object->clock);
    }
}
