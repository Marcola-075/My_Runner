/*
** EPITECH PROJECT, 2019
** my_txt
** File description:
** my_txt
*/

#include "my.h"

sfText *txt_score(void)
{
    sfText *txt;
    sfFont* font;

    font = sfFont_createFromFile("Sources/Fronts/Berton-Roman-trial.ttf");
    txt = sfText_create();
    sfText_setString(txt, "Run finish at");
    sfText_setFont(txt, font);
    sfText_setCharacterSize(txt, 50);
    return (txt);
}

sfText *showscore(float score)
{
    sfText *txt;
    sfFont* font;
    sfVector2f pos = {320, 5};
    int a = score;

    font = sfFont_createFromFile("Sources/Fronts/Handwritingg _3.ttf");
    txt = sfText_create();
    sfText_setString(txt, my_realloc(inttochar(a), "%", 0, 0));
    sfText_setFont(txt, font);
    sfText_setCharacterSize(txt, 50);
    sfText_setPosition(txt, pos);
    return (txt);
}
