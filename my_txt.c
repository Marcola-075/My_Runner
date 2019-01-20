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
    sfText_setString(txt, "Run finish at ");
    sfText_setFont(txt, font);
    sfText_setCharacterSize(txt, 50);
    return (txt);
}
