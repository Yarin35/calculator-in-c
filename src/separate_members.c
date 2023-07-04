/*
** EPITECH PROJECT, 2023
** separate_members.c
** File description:
** separate_members.c
*/

#include "calcul.h"


char **separate_members(char *input)
{
    char **members = str_split(input, " \n");

    for (int i = 0; members[i] != NULL; i ++)
        if (strcmp(members[i], "") == 0)
            members[i] = NULL;
    return members;
}
