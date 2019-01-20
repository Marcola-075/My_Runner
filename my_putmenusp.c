/*
** EPITECH PROJECT, 2019
** put_menusp
** File description:
** menusp
*/

#include "my.h"

void my_put_backsp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->bk_menu.obj_sp, object->bk_menu.pos);
    sfSprite_setTextureRect(object->bk_menu.obj_sp, object->bk_menu.rect);
    sfRenderWindow_drawSprite(window, object->bk_menu.obj_sp, NULL);
}

void my_put_unselplsp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->unselplay.obj_sp, object->unselplay.pos);
    sfSprite_setTextureRect(object->unselplay.obj_sp, object->unselplay.rect);
    sfRenderWindow_drawSprite(window, object->unselplay.obj_sp, NULL);
}

void my_put_selplsp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->play.obj_sp, object->play.pos);
    sfSprite_setTextureRect(object->play.obj_sp, object->play.rect);
    sfRenderWindow_drawSprite(window, object->play.obj_sp, NULL);
}

void my_put_unselexsp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->unselexit.obj_sp, object->unselexit.pos);
    sfSprite_setTextureRect(object->unselexit.obj_sp, object->unselexit.rect);
    sfRenderWindow_drawSprite(window, object->unselexit.obj_sp, NULL);
}

void my_put_selexsp(sfRenderWindow *window, objs *object)
{
    sfSprite_setPosition(object->exit.obj_sp, object->exit.pos);
    sfSprite_setTextureRect(object->exit.obj_sp, object->exit.rect);
    sfRenderWindow_drawSprite(window, object->exit.obj_sp, NULL);
}
