/*
** EPITECH PROJECT, 2023
** add_or_sub.c
** File description:
** to add or substract
*/

#include "calcul.h"

void add_or_sub(equation_t *result, int index)
{
    double first = strtod(result->members[index - 1], NULL);
    double second = strtod(result->members[index + 1], NULL);
    double res = 0;
    char resex[100];
    
    if (strcmp(result->members[index], "+") == 0)
        res = first + second;
    else
        res = first - second;
    sprintf(resex, "%lf", res);
    result->members = member_replace(result, index, resex);
}
