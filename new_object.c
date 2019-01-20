/*
** EPITECH PROJECT, 2019
** new_obj
** File description:
** obj
*/

#include "my.h"

void new_object(objs *object)
{
    if (object->state != DEATH && object->state != WIN
        && object->state != DOWN) {
        object->back_four.rect.left += 2;
        object->back_five.rect.left += 4;
        object->land.rect.left += 10;
        object->obstacle_one.pos.x -= 10;
    }
    if (object->obstacle_one.pos.x <= -180 && object->score <= 93)
        object->obstacle_one.pos.x = 1280;
    if (object->state == DOWN) {
        object->back_four.rect.left += 3;
        object->back_five.rect.left += 9;
        object->land.rect.left += 13;
        object->obstacle_one.pos.x -= 13;
    }
    if (object->score >= 100 && object->state != DEATH && object->state != WIN
        && object->state != JUMP) {
        object->yoshi.pos.x += 6;
        object->lvl_end.pos.x -= 13;
    }
}

void create_sp_two(objs *object)
{
    object->state = MENU;
    object->menustate = 0;
    object->score = 0;
    object->bk_menu = back_menu(object->bk_menu);
    object->unselplay = unselectplay(object->unselplay);
    object->play = selectplay(object->play);
    object->unselexit = unselectexit(object->unselexit);
    object->exit = selectexit(object->exit);
    object->gameover = game_over(object->gameover);
    object->winsp = game_winner(object->winsp);
    object->game_music = game_music();
    object->menu_music = menu_music();
}

void game_core(sfRenderWindow* window, sfEvent event, objs *object, int *start)
{
    int act = 0;
    float sec = 0;

    while (object->state != MENU) {
        analyse_ev(window, event, object);
        if (object->state == DEATH || object->state == WIN)
            sfMusic_stop(object->menu_music);
        sec = my_clock(object);
        (*start) = start_music_menu(object, start);
        act = state_act(object, sec);
        if (act == DEATH || act == WIN) {
            create_sp(object);
            object->state = MENU;
            object->score = 0;
            (*start) = 0;
        }
        run(sec, object);
        score_and_game(object);
        sfRenderWindow_clear(window, sfBlack);
        display_backgrounds(window, object);
    }
}
