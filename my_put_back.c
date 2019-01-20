/*
** EPITECH PROJECT, 2019
** put_back
** File description:
** put_back
*/

#include "my.h"

void my_put_landsp(sfRenderWindow *window, objs *object)
{
    sfSprite_setTextureRect(object->land.obj_sp, object->land.rect);
    sfRenderWindow_drawSprite(window, object->land.obj_sp, NULL);
}

void my_put_backthreesp(sfRenderWindow *window, objs *object)
{
    sfSprite_setTextureRect(object->back_three.obj_sp, object->back_three.rect);
    sfRenderWindow_drawSprite(window, object->back_three.obj_sp, NULL);
}

void my_put_backfoursp(sfRenderWindow *window, objs *object)
{
    sfSprite_setTextureRect(object->back_four.obj_sp, object->back_four.rect);
    sfRenderWindow_drawSprite(window, object->back_four.obj_sp, NULL);
}

void my_put_backfivesp(sfRenderWindow *window, objs *object)
{
    sfSprite_setTextureRect(object->back_five.obj_sp, object->back_five.rect);
    sfRenderWindow_drawSprite(window, object->back_five.obj_sp, NULL);
}
