/*
** EPITECH PROJECT, 2019
** sound
** File description:
** sound
*/

#include "my.h"

sfMusic *jump_music(void)
{
    sfMusic *jump;
    jump = sfMusic_createFromFile("Sources/Sounds/jump.flac");
    return (jump);
}

sfMusic *win_music(void)
{
    sfMusic *win;
    win = sfMusic_createFromFile("Sources/Sounds/win.flac");
    return (win);
}

sfMusic *death_music(void)
{
    sfMusic *death;
    death = sfMusic_createFromFile("Sources/Sounds/death.flac");
    return (death);
}

sfMusic *game_music(void)
{
    sfMusic *game;
    game = sfMusic_createFromFile("Sources/Sounds/Music.ogg");
    sfMusic_setLoop(game, sfTrue); 
    return (game);
}

sfMusic *menu_music(void)
{
    sfMusic *game;
    game = sfMusic_createFromFile("Sources/Sounds/GMusic.ogg");
    sfMusic_setLoop(game, sfTrue);
    return (game);
}
