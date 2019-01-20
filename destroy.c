/*
** EPITECH PROJECT, 2019
** destroy
** File description:
** destroy
*/

#include "my.h"

objs destroyother(objs object)
{
    sfMusic_destroy(object.jump);
    sfMusic_destroy(object.win);
    sfMusic_destroy(object.death);
    sfMusic_destroy(object.menu_music);
    sfMusic_destroy(object.game_music);
    sfText_destroy(object.txtscore);
    sfClock_destroy(object.clock);
    return (object);
}

objs destroytexture(objs object)
{
    sfTexture_destroy(object.back_three.obj);
    sfTexture_destroy(object.back_four.obj);
    sfTexture_destroy(object.back_five.obj);
    sfTexture_destroy(object.land.obj);
    sfTexture_destroy(object.yoshi.obj);
    sfTexture_destroy(object.obstacle_one.obj);
    sfTexture_destroy(object.lvl_end.obj);
    sfTexture_destroy(object.gameover.obj);
    sfTexture_destroy(object.winsp.obj);
    sfTexture_destroy(object.bk_menu.obj);
    sfTexture_destroy(object.unselplay.obj);
    sfTexture_destroy(object.play.obj);
    sfTexture_destroy(object.unselexit.obj);
    sfTexture_destroy(object.exit.obj);
    return (object);
}

objs destroysp(objs object)
{
    sfSprite_destroy(object.back_three.obj_sp);
    sfSprite_destroy(object.back_four.obj_sp);
    sfSprite_destroy(object.back_five.obj_sp);
    sfSprite_destroy(object.land.obj_sp);
    sfSprite_destroy(object.yoshi.obj_sp);
    sfSprite_destroy(object.obstacle_one.obj_sp);
    sfSprite_destroy(object.lvl_end.obj_sp);
    sfSprite_destroy(object.gameover.obj_sp);
    sfSprite_destroy(object.winsp.obj_sp);
    sfSprite_destroy(object.bk_menu.obj_sp);
    sfSprite_destroy(object.unselplay.obj_sp);
    sfSprite_destroy(object.play.obj_sp);
    sfSprite_destroy(object.unselexit.obj_sp);
    sfSprite_destroy(object.exit.obj_sp);
    return (object);
}

objs destroy(objs object)
{
    destroysp(object);
    destroytexture(object);
    destroyother(object);
    return (object);
}
