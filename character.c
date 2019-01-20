/*
** EPITECH PROJECT, 2019
** character
** File description:
** character
*/

#include "my.h"

obj animation(obj yoshi)
{
    int nb = yoshi.rect.left;

    yoshi.rect.width = 180;
    yoshi.rect.top = 0;
    if (nb >= 930)
        nb = 0;
    else
        nb = nb + 186;
    yoshi.rect.left = nb;
    return (yoshi);
}

obj run_down(obj yoshi)
{
    int nb = yoshi.rect.left;

    yoshi.rect.top = 410;
    yoshi.rect.width = 220;
    if (yoshi.rect.left >= 1640)
        nb = 1400;
    else
        nb = 1640;
    yoshi.rect.left = nb;
    return (yoshi);
}

obj jump_anim(objs *object, float sec)
{
    object->yoshi.rect.width = 180;
    if (sec < 0.1)
        sfMusic_play(object->jump);
    if (sec < 0.5) {
        object->yoshi.rect.left = -25;
        object->yoshi.pos.y -= 10;
        object->yoshi.rect.top = 190;
    }
    if (sec > 0.5 && sec < 1.0 && object->yoshi.pos.y < 370) {
        object->yoshi.rect.left = 290;
        object->yoshi.pos.y += 10;
    }
    if (sec > 1.0) {
        object->yoshi.rect.left = 0;
        object->yoshi.rect.top = 0;
    }
    return (object->yoshi);
}

obj death_anim(objs *object, float sec)
{
    sfMusic_stop (object->game_music);
    if (sec < 0.1)
        sfMusic_play(object->death);
    if (sec < 0.25) {
        object->yoshi.rect.left = 660;
        object->yoshi.rect.width = 150;
        object->yoshi.pos.x -= 2;
        object->yoshi.pos.y -= 2;
        object->yoshi.rect.top = 410;
    }
    if (sec > 0.5 && sec < 1)
        object->gameover.pos.y += 12;
    if (sec > 0.25 && sec < 0.5) {
        object->yoshi.pos.x -= 2;
        object->yoshi.pos.y += 2;
    }
    if (sec > 0.5 && sec < 1.5) {
        object->yoshi.pos.y = 370;
        object->yoshi.rect.left = 820;
    }
    return (object->yoshi);
}

obj  win_game(objs *object, float sec)
{
    sfMusic_stop (object->game_music);
    if (sec < 0.1)
        sfMusic_play(object->win);
    if (sec < 0.25) {
        object->yoshi.rect.left = 1100;
        object->yoshi.rect.width = 140;
        object->yoshi.rect.top = 395;
    }
    if (sec > 0.25 && sec < 0.5) {
        object->yoshi.rect.left = 1245;
        object->yoshi.pos.y -= 10;
    }
    if (sec > 0.25 && sec < 0.75)
        object->winsp.pos.y += 12;
    if (sec > 0.5 && sec < 0.75 && object->yoshi.pos.y < 370)
        object->yoshi.pos.y += 10;
    if (sec < 0.75 && sec > 1)
        object->yoshi.rect.left = 1100;
    if (sec > 1)
        object->yoshi.rect.left = 960;
    return (object->yoshi);
}
