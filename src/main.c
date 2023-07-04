/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main.c
*/

#include "calcul.h"

int main(void)
{
    char *input = NULL;
    size_t len = 0;
    equation_t *result = malloc(sizeof(equation_t));

    result->result = 0;
    while (true) {
        printf("enter equation: ");
        if ((len = getline(&input, &len, stdin)) == (size_t)-1) {
            printf("break\n");
            break;
        }
        calcul(input, result);
        printf("result is %f\n", result->result);
    }
    if (input != NULL)
        free(input);
    return 0;
}
