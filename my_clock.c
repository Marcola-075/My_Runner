/*
** EPITECH PROJECT, 2019
** my_clock
** File description:
** my_clock
*/

#include "my.h"

float my_clock(objs *object)
{
    sfTime time;
    float sec;

    if (object->clock == NULL)
        object->clock = sfClock_create();
    time = sfClock_getElapsedTime(object->clock);
    sec = time.microseconds / 1000000.0;
    return (sec);
}
