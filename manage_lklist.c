/*
** EPITECH PROJECT, 2018
** manage_lklist
** File description:
** manage_lklist
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

struct number *create_list(void)
{
    number *list = NULL;

    return (list);
}

void put_in_list(number **list, int data)
{
    number *new = malloc(sizeof(*new));

    new->nbr = data;
    new->next = *list;
    *list = new;
}

void put_in_end_list(number **list, int data)
{
    number *tmp = malloc(sizeof(*tmp));
    number *new = malloc(sizeof(*new));

    new->nbr = data;
    new->next = NULL;
    tmp = *list;
    if (tmp != NULL) {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
    else
        *list = new;
}

void disp_list(number *list)
{
    number *nb;

    nb = list;
    while (nb != NULL) {
        my_put_nbr(nb->nbr);
        my_putstr("-> ");
        nb = nb->next;
    }
    my_putstr("NULL\n");
}
