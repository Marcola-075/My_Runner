/*
** EPITECH PROJECT, 2019
** end_tab
** File description:
** end_tab
*/

#include "my.h"

obj game_over(obj gameover)
{
    sfVector2f pos = {-50, -370};
    sfIntRect rect = {0, 0, 1280, 720};

    gameover = create_object("Sources/gameovertab.png", pos, rect);
    sfSprite_setTexture(gameover.obj_sp, gameover.obj, sfTrue);
    sfSprite_setTextureRect(gameover.obj_sp, rect);
    sfSprite_setPosition(gameover.obj_sp, gameover.pos);
    return (gameover);
}

obj game_winner(obj winsp)
{
    sfVector2f pos = {-50, -370};
    sfIntRect rect = {0, 0, 1280, 720};

    winsp = create_object("Sources/wintabtab.png", pos, rect);
    sfSprite_setTexture(winsp.obj_sp, winsp.obj, sfTrue);
    sfSprite_setTextureRect(winsp.obj_sp, rect);
    sfSprite_setPosition(winsp.obj_sp, winsp.pos);
    return (winsp);
}
