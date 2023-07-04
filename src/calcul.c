/*
** EPITECH PROJECT, 2023
** calcul.c
** File description:
** calcul.c
*/

#include "calcul.h"

void calcul(char *input, equation_t *result)
{
    int i = 0;
    bool calc = false;

    result->members = separate_members(input);
    while (result->members[i] != NULL)
        i ++;
    result->len = i;

    while (result->len != 1) {
        for (int i = 0; i < result->len; i ++)
            if (result->members[i] != NULL && calc == false &&
                (strcmp(result->members[i], "*") == 0 ||
                 strcmp(result->members[i], "/") == 0)) {
                mul_or_div(result, i);
                calc = true;
                break;
            }
        for (int i = 0; i < result->len; i ++)
            if (result->members[i] != NULL && calc == false &&
                (strcmp(result->members[i], "+") == 0 ||
                 strcmp(result->members[i], "-") == 0)) {
                add_or_sub(result, i);
                break;
                calc = true;
            }
        calc = false;
    }
    result->result = strtod(result->members[0], NULL);
}
