/*
** EPITECH PROJECT, 2019
** c_and_d
** File description:
** c_and_d
*/

#include "my.h"

obj land(obj land)
{
    sfVector2f pos = {0, 500};
    sfIntRect rect = {0, 0, 1280, 241};

    land = create_object("Sources/Level_1_land.png", pos, rect);
    sfSprite_setTexture(land.obj_sp, land.obj, sfTrue);
    sfSprite_setTextureRect(land.obj_sp, rect);
    sfTexture_setRepeated(land.obj, sfTrue);
    sfSprite_setPosition(land.obj_sp, land.pos);
    return (land);
}

obj obs_one(obj obstacle_one)
{
    sfVector2f pos = {1280, 450};
    sfIntRect rect = {0, 0, 180, 190};

    obstacle_one = create_object("Sources/Maskass.png", pos, rect);
    sfSprite_setTexture(obstacle_one.obj_sp, obstacle_one.obj, sfTrue);
    sfSprite_setTextureRect(obstacle_one.obj_sp, rect);
    sfSprite_setPosition(obstacle_one.obj_sp, obstacle_one.pos);
    return (obstacle_one);
}

obj lvl_end(obj lvl_end)
{
    sfVector2f pos = {1480, 350};
    sfIntRect rect = {0, 0, 200, 200};

    lvl_end = create_object("Sources/pano.png", pos, rect);
    sfSprite_setTexture(lvl_end.obj_sp, lvl_end.obj, sfTrue);
    sfSprite_setTextureRect(lvl_end.obj_sp, rect);
    sfSprite_setPosition(lvl_end.obj_sp, lvl_end.pos);
    return (lvl_end);
}

void create_sp(objs *object)
{
    object->back_three = test_backthree(object->back_three);
    object->back_four = test_backfour(object->back_four);
    object->back_five = test_backfive(object->back_five);
    object->lvl_end = lvl_end(object->lvl_end);
    object->land = land(object->land);
    object->yoshi = yoshi_run(object->yoshi);
    object->obstacle_one = obs_one(object->obstacle_one);
    object->jump = jump_music();
    object->death = death_music();
    object->win  = win_music();
    object->txtscore = txt_score();
    object->clock = NULL;
    create_sp_two(object);
}

void display_backgrounds(sfRenderWindow *window, objs *object)
{
    new_object(object);
    my_put_backthreesp(window, object);
    my_put_backfoursp(window, object);
    my_put_backfivesp(window, object);
    my_put_obsonesp(window, object);
    my_put_yosp(window, object);
    my_put_endsp(window, object);
    my_put_landsp(window, object);
    sfSprite_setPosition(object->gameover.obj_sp, object->gameover.pos);
    sfSprite_setTextureRect(object->gameover.obj_sp, object->gameover.rect);
    sfRenderWindow_drawSprite(window, object->gameover.obj_sp, NULL);
    sfSprite_setPosition(object->winsp.obj_sp, object->winsp.pos);
    sfSprite_setTextureRect(object->winsp.obj_sp, object->winsp.rect);
    sfRenderWindow_drawSprite(window, object->winsp.obj_sp, NULL);
    sfRenderWindow_drawText(window, object->txtscore, NULL);
    sfRenderWindow_drawText(window, object->txtscoretwo, NULL);
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
}
