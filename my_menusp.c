/*
** EPITECH PROJECT, 2019
** menu
** File description:
** menu
*/

#include "my.h"

obj back_menu(obj bk_menu)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1280, 720};

    bk_menu = create_object("Sources/Menu/menu.png", pos, rect);
    sfSprite_setTexture(bk_menu.obj_sp, bk_menu.obj, sfTrue);
    sfSprite_setTextureRect(bk_menu.obj_sp, rect);
    sfSprite_setPosition(bk_menu.obj_sp, bk_menu.pos);
    return (bk_menu);
}

obj unselectplay(obj unselplay)
{
    sfVector2f pos = {520, 400};
    sfIntRect rect = {0, 0, 300, 100};

    unselplay = create_object("Sources/Menu/playunselectbutton.png", pos, rect);
    sfSprite_setTexture(unselplay.obj_sp, unselplay.obj, sfTrue);
    sfSprite_setTextureRect(unselplay.obj_sp, rect);
    sfSprite_setPosition(unselplay.obj_sp, unselplay.pos);
    return (unselplay);
}

obj selectplay(obj play)
{
    sfVector2f pos = {520, 400};
    sfIntRect rect = {0, 0, 300, 100};

    play = create_object("Sources/Menu/playselectedbutton.png", pos, rect);
    sfSprite_setTexture(play.obj_sp, play.obj, sfTrue);
    sfSprite_setTextureRect(play.obj_sp, rect);
    sfSprite_setPosition(play.obj_sp, play.pos);
    return (play);
}

obj unselectexit(obj unselexit)
{
    sfVector2f pos = {520, 500};
    sfIntRect rect = {0, 0, 300, 100};

    unselexit = create_object("Sources/Menu/exitunselectbutton.png", pos, rect);
    sfSprite_setTexture(unselexit.obj_sp, unselexit.obj, sfTrue);
    sfSprite_setTextureRect(unselexit.obj_sp, rect);
    sfSprite_setPosition(unselexit.obj_sp, unselexit.pos);
    return (unselexit);
}

obj selectexit(obj exit)
{
    sfVector2f pos = {520, 500};
    sfIntRect rect = {0, 0, 300, 100};

    exit = create_object("Sources/Menu/exitselectedbutton.png", pos, rect);
    sfSprite_setTexture(exit.obj_sp, exit.obj, sfTrue);
    sfSprite_setTextureRect(exit.obj_sp, rect);
    sfSprite_setPosition(exit.obj_sp, exit.pos);
    return (exit);
}
