/*
** EPITECH PROJECT, 2019
** charac
** File description:
** charac
*/

#include "my.h"

obj yoshi_run(obj yoshi)
{
    sfVector2f pos = {200, 370};
    sfIntRect rect = { 0, 0, 180, 190};

    yoshi = create_object("Sources/Yoshi_spritesheet.png", pos, rect);
    sfSprite_setTexture(yoshi.obj_sp, yoshi.obj, sfTrue);
    sfSprite_setTextureRect(yoshi.obj_sp, rect);
    sfSprite_setPosition(yoshi.obj_sp, yoshi.pos);
    return (yoshi);
}
