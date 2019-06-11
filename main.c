/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

void my_usage(void)
{
    char *str = "Toto\n";
    my_putstr(str);
    my_putstr("My_runner :\nDESCRIPTION :");
    my_putstr("Finish the level and avoid enemies\n\n");
    my_putstr("CONTROLS :\nMENU :\n");
    my_putstr("Echap: (close the window)\n");
    my_putstr("Up key: Play(Start the game)\nDown key : ");
    my_putstr("Exit(close the window)\nEnter: Confirm\n\n");
    my_putstr("GAME :\nUp key: Jump\nDonw key: Sprint\n");
    my_putstr("Echap: (close the window)\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp("-h", av[1]) == 0) {
        my_usage();
        return (0);
    }
    else
        game();
    return (0);
}
