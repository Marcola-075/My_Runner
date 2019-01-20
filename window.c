/*
** EPITECH PROJECT, 2018
** window
** File description:
** window
*/

#include "my.h"


int check_death(objs *object)
{
    if (object->yoshi.pos.x + 100 >= object->obstacle_one.pos.x
        && object->yoshi.pos.x + 100 <= object->obstacle_one.pos.x + 80
        && object->yoshi.pos.y + 190 >= object->obstacle_one.pos.y - 10
        && object->yoshi.pos.y + 190 >= object->obstacle_one.pos.y + 80) {
        return (4);
        }
    return (0);
}

int analyse_ev(sfRenderWindow *window, sfEvent event, objs *object)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed ||
            sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            sfRenderWindow_close(window);
        if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue
            && object->state != DEATH && object->state != WIN
            && object->state != DOWN)
            object->state = JUMP;
        if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue
            && object->state != DEATH && object->state != WIN
            && object->state != JUMP)
            object->state = DOWN;
        if (sfKeyboard_isKeyPressed(sfKeyDown) == sfFalse
            && object->state != DEATH && object->state != WIN
            && object->state != JUMP)
            object->state = RUN;
    }
    return (0);
}

int state_act(objs *object, float sec)
{
    if (object->state == DEATH) {
        object->yoshi = death_anim(object, sec);
        if (sec > 5) {
            return (DEATH);
        }
    }
    if (object->state == JUMP) {
        object->yoshi = jump_anim(object, sec);
        if (sec > 1)
            object->state = RUN;
    }
    if (object->state == WIN) {
        object->yoshi = win_game(object, sec);
        if (sec > 5) {
            return (WIN);
        }
    }
    return (0);
}

void isopen(sfRenderWindow* window, sfEvent event, objs object)
{
    int start = 0;

    while (sfRenderWindow_isOpen(window)) {
        if (object.state != MENU) {
            game_core(window, event, &object, &start);
            }
        if (object.state == MENU)
            my_menu(window, event, &object, &start);
    }
}

int game(void)
{
    sfRenderWindow* window;
    sfVideoMode video_mode = {1280, 720, 32};
    sfEvent event;
    objs object;

    window = sfRenderWindow_create(video_mode,
                                   "Yoshi's Run",
                                   sfDefaultStyle,
                                   NULL);
    create_sp(&object);
    sfRenderWindow_setFramerateLimit(window, 60);
    isopen(window, event, object);
    object = destroy(object);
    sfRenderWindow_destroy(window);
    return (0);
}
