/*
** EPITECH PROJECT, 2023
** member_replace.c
** File description:
** to replace members of a char ** by another
*/

#include "calcul.h"

char **member_replace(equation_t *result, int index, char *res)
{
    char **members = NULL;
    int ind = 0;

    result->len -= 2;
    members = malloc(sizeof(char *) * (result->len + 1));
    for (int j = 0; result->members[j] != NULL; j ++) {
        if (ind == index - 1) {
            members[ind ++] = strdup(res);
            j += 2;
        } else
            members[ind ++] = strdup(result->members[j]);
    }
    for (int j = 0; result->members[j] != NULL; j ++)
        free(result->members[j]);
    free(result->members);
    members[result->len] = NULL;
    for (int i = 0; members[i] != NULL; i ++)
        printf("%s ", members[i]);
    printf("\n--------------\n");
    return members;
}
