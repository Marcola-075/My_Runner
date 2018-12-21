/*
** EPITECH PROJECT, 2018
** object
** File description:
** object
*/

#include <SFML/Graphics.h>
#include "my.h"

struct obj create_object(const char *path_to_spritesheet, sfVector2f pos, sfIntRect rect)
{
    obj test;
        
    test.obj = sfTexture_createFromFile(path_to_spritesheet, NULL);
    test.obj_sp = sfSprite_create();
    test.pos = pos;
    test.rect = rect;

    return (test);
}
