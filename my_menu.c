/*
** EPITECH PROJECT, 2019
** my_menu
** File description:
** my_menu
*/

#include "my.h"

int analyse_menuev(sfRenderWindow *window, sfEvent event, objs *object, int *start)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue)
            object->menustate = 0;
        if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue)
            object->menustate = 1;
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue && object->menustate == 1) {
            sfMusic_stop(object->game_music);
            sfRenderWindow_close(window);
        }
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue && object->menustate == 0) {
            object->state = RUN;
            (*start) = 0;
            sfMusic_stop(object->game_music);
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            sfRenderWindow_close(window);
    }
    return (0);
}

void my_menu(sfRenderWindow* window, sfEvent event, objs *object, int *start)
{
    (*start) = start_music(object, start);
    analyse_menuev(window, event, object, start);
    sfRenderWindow_clear(window, sfBlack);
    my_put_backsp(window, object);
    if (object->menustate == 0) {
    my_put_selplsp(window, object);
    my_put_unselexsp(window, object);
    }
    if (object->menustate == 1) {
    my_put_unselplsp(window, object);
    my_put_selexsp(window, object);
    }
    sfRenderWindow_display(window);
}
