/*
** EPITECH PROJECT, 2018
** window
** File description:
** window
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"

int animation(int nb)
{
    if(nb == 220)
        nb = 0;
    else
        nb = nb + 110;
    return (nb);
}

obj test_back(sfRenderWindow *window, obj back)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1280, 800};

    back = create_object("Sources/back.png", pos, rect);
    sfSprite_setTexture(back.obj_sp, back.obj, sfTrue);
    sfSprite_setTextureRect(back.obj_sp, rect);
    sfTexture_setRepeated(back.obj, sfTrue);
    sfSprite_setPosition(back.obj_sp, back.pos);
    return (back);
}

obj test_backtwo(sfRenderWindow *window, obj back2)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1280, 800};

    back2 = create_object("Sources/back2.png", pos, rect);
    sfSprite_setTexture(back2.obj_sp, back2.obj, sfTrue);
    sfSprite_setTextureRect(back2.obj_sp, rect);
    sfTexture_setRepeated(back2.obj, sfTrue);
    sfSprite_setPosition(back2.obj_sp, back2.pos);
    return (back2);
}

obj test_land(sfRenderWindow *window, obj land)
{
    sfVector2f pos = {0, 500};
    sfIntRect rect = {0, 0, 1280, 800};

    land = create_object("Sources/sol.png", pos, rect);
    sfSprite_setTexture(land.obj_sp, land.obj, sfTrue);
    sfSprite_setTextureRect(land.obj_sp, rect);
    sfTexture_setRepeated(land.obj, sfTrue);
    sfSprite_setPosition(land.obj_sp, land.pos);
    return (land);
}

obj test_duck(sfRenderWindow *window, obj duck)
{
    sfVector2f pos = {300, 450};
    sfIntRect rect = {0, 0, 110, 110};
    
    duck = create_object("Sources/my_hunter_spritesheet.png", pos, rect);
    sfSprite_setTexture(duck.obj_sp, duck.obj, sfTrue);
    sfSprite_setTextureRect(duck.obj_sp, rect);
    sfSprite_setPosition(duck.obj_sp, duck.pos);
    return (duck);
}

int analyse_game_ev(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
}

void display_backgrounds(sfRenderWindow *window, objs *object)
{
    object->back.rect.left += 1;
    object->back_two.rect.left += 3;
    object->land.rect.left += 20;
    sfSprite_setTextureRect(object->back.obj_sp, object->back.rect);
    sfSprite_setTextureRect(object->back_two.obj_sp, object->back_two.rect);
    sfSprite_setTextureRect(object->land.obj_sp, object->land.rect);
    sfRenderWindow_drawSprite(window, object->back.obj_sp, NULL);
    sfRenderWindow_drawSprite(window, object->back_two.obj_sp, NULL);
    sfRenderWindow_drawSprite(window, object->land.obj_sp, NULL);
}

void main(void)
{
    sfRenderWindow* window;
    sfVideoMode video_mode = {1280, 800, 32};
    sfEvent event;
    sfClock *clock;
    sfTime time;
    float sec;
    objs object;

    window = sfRenderWindow_create(video_mode, "My_Runner", sfDefaultStyle, NULL);
    object.back = test_back(window, object.back);
    object.back_two = test_backtwo(window, object.back_two);
    object.land = test_land(window, object.land);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        display_backgrounds(window, &object);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_game_ev(window, event);
    }
    sfRenderWindow_destroy(window);
}
