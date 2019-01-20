/*
** EPITECH PROJECT, 2019
** back
** File description:
** back
*/

#include "my.h"

obj test_backthree(obj backthree)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1280, 720};

    backthree = create_object("Sources/Level_1_Sky.png", pos, rect);
    sfSprite_setTexture(backthree.obj_sp, backthree.obj, sfTrue);
    sfSprite_setTextureRect(backthree.obj_sp, rect);
    sfTexture_setRepeated(backthree.obj, sfTrue);
    sfSprite_setPosition(backthree.obj_sp, backthree.pos);
    return (backthree);
}

obj test_backfour(obj backfour)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1280, 720};

    backfour = create_object("Sources/Level_1_Clouds.png", pos, rect);
    sfSprite_setTexture(backfour.obj_sp, backfour.obj, sfTrue);
    sfSprite_setTextureRect(backfour.obj_sp, rect);
    sfTexture_setRepeated(backfour.obj, sfTrue);
    sfSprite_setPosition(backfour.obj_sp, backfour.pos);
    return (backfour);
}

obj test_backfive(obj backfive)
{
    sfVector2f pos = {0, -150};
    sfIntRect rect = {0, 0, 1280, 720};

    backfive = create_object("Sources/Level_1_Back.png", pos, rect);
    sfSprite_setTexture(backfive.obj_sp, backfive.obj, sfTrue);
    sfSprite_setTextureRect(backfive.obj_sp, rect);
    sfTexture_setRepeated(backfive.obj, sfTrue);
    sfSprite_setPosition(backfive.obj_sp, backfive.pos);
    return (backfive);
}
