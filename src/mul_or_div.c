/*
** EPITECH PROJECT, 2023
** mul_or_div.c
** File description:
** multiply or divide
*/

#include "calcul.h"

void mul_or_div(equation_t *result, int index)
{
    double first = strtod(result->members[index - 1], NULL);
    double second = strtod(result->members[index + 1], NULL);
    double res = 0;
    char resex[100];

    if (strcmp(result->members[index], "*") == 0)
        res = first * second;
    else
        res = first / second;
    sprintf(resex, "%lf", res);
    result->members = member_replace(result, index, resex);
}
