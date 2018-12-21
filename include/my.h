/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

typedef struct obj
{
    sfTexture* obj;
    sfSprite* obj_sp;
    sfVector2f pos;
    sfIntRect rect;
} obj;

typedef struct objs
{
    obj back;
    obj back_two;
    obj land;
}objs;

typedef struct sprite sprite;
struct sprite
{
    sfSprite sp;
    sprite *next;
};

struct obj create_object(const char *path_to_spritesheet, sfVector2f pos, sfIntRect rect);

#endif