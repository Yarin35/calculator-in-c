/*
** EPITECH PROJECT, 2023
** member_del.c
** File description:
** to del a char * in a char ** at a given index
*/

#include "calcul.h"

void member_del(char **member, int index)
{
    free(member[index]);
    member[index] = NULL;    
}
