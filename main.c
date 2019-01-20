/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp("-h", av[1]) == 0) {
        my_putstr("ok");
        return (0);
    }
    else
        game();
    return (0);
}
