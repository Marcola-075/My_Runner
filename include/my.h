/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

enum state
{
    RUN,
    JUMP,
    DEATH,
    WIN,
    DOWN,
    MENU,
};

typedef struct obj {
    sfTexture* obj;
    sfSprite* obj_sp;
    sfVector2f pos;
    sfIntRect rect;
} obj;

typedef struct objs {
    obj back_three;
    obj back_four;
    obj back_five;
    obj land;
    obj yoshi;
    obj obstacle_one;
    obj lvl_end;
    obj gameover;
    obj winsp;
    obj bk_menu;
    obj unselplay;
    obj play;
    obj unselexit;
    obj exit;
    sfMusic *jump;
    sfMusic *win;
    sfMusic *death;
    sfMusic *game_music;
    sfMusic *menu_music;
    sfClock *clock;
    sfText *txtscore;
    sfText *txtscoretwo;
    float score;
    int state;
    int menustate;
} objs;


struct obj create_object(const char *path, sfVector2f pos, sfIntRect rect);
int my_strcmp(char const *sone, char const *stwo);
int my_putstr(char const *str);
int my_strlen(char const *str);
obj test_backthree(obj backthree);
obj test_backfour(obj backfour);
obj test_backfive(obj backfive);
obj animation(obj yoshi);
obj yoshi_run(obj yoshi);
int jump(sfRenderWindow *window, sfEvent event);
obj land(obj land);
void create_sp(objs *object);
void display_backgrounds(sfRenderWindow *window, objs *object);
int game(void);
void isopen(sfRenderWindow* window, sfEvent event, objs object);
obj jump_anim(objs *objects, float sec);
obj death_anim(objs *objects, float sec);
obj win_game(objs *objects, float sec);
obj run_down(obj yoshi);
sfMusic *jump_music(void);
sfMusic *win_music(void);
sfMusic *death_music(void);
sfMusic *game_music(void);
int start_music(objs *object, int *start);
int check_death(objs *object);
void score_and_game(objs *object);
void run(float sec, objs *object);
float my_clock(objs *object);
void my_put_yosp(sfRenderWindow *window, objs *object);
void my_put_obsonesp(sfRenderWindow *window, objs *object);
void my_put_endsp(sfRenderWindow *window, objs *object);
void my_put_landsp(sfRenderWindow *window, objs *object);
void my_put_backthreesp(sfRenderWindow *window, objs *object);
void my_put_backfoursp(sfRenderWindow *window, objs *object);
void my_put_backfivesp(sfRenderWindow *window, objs *object);
void new_object(objs *object);
obj game_over(obj gameover);
obj game_winner(obj winsp);
obj back_menu(obj bk_menu);
obj unselectplay(obj unselplay);
obj selectplay(obj play);
obj unselectexit(obj unselexit);
obj selectexit(obj exit);
void my_put_backsp(sfRenderWindow *window, objs *object);
void my_put_unselplsp(sfRenderWindow *window, objs *object);
void my_put_selplsp(sfRenderWindow *window, objs *object);
void my_put_unselexsp(sfRenderWindow *window, objs *object);
void my_put_selexsp(sfRenderWindow *window, objs *object);
void my_menu(sfRenderWindow* window, sfEvent event, objs *object, int *start);
int start_music_menu(objs *object, int *start);
sfMusic *menu_music(void);
sfText *txt_score(void);
void create_sp_two(objs *object);
void game_core(sfRenderWindow* window, sfEvent event, objs *object, int *start);
void analyse_ev(sfRenderWindow *window, sfEvent event, objs *object);
int state_act(objs *object, float sec);
objs destroy(objs object);
char *inttochar(int nb);
sfText *showscore(float score);
char *my_realloc(char *str, char *str_two, int i, int y);

#endif
