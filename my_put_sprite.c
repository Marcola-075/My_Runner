/*
** EPITECH PROJECT, 2019
** put_sp
** File description:
** put_sp
*/

#include "my.h"

void my_put_yosp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->yoshi.obj_sp, object->yoshi.pos);
    sfSprite_setTextureRect(object->yoshi.obj_sp, object->yoshi.rect);
    sfRenderWindow_drawSprite(window, object->yoshi.obj_sp, NULL);
}

void my_put_endsp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->lvl_end.obj_sp, object->lvl_end.pos);
    sfSprite_setTextureRect(object->lvl_end.obj_sp, object->lvl_end.rect);
    sfRenderWindow_drawSprite(window, object->lvl_end.obj_sp, NULL);
}

void my_put_obsonesp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->obstacle_one.obj_sp, object->obstacle_one.pos);
    sfSprite_setTextureRect(object->obstacle_one.obj_sp,
                            object->obstacle_one.rect);
    sfRenderWindow_drawSprite(window, object->obstacle_one.obj_sp, NULL);
}
