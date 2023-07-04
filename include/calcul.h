/*
** EPITECH PROJECT, 2023
** calcul.h
** File description:
** calcul.h
*/

#ifndef CALCUL_H
    #define CALCUL_H

    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <string.h>
    #include <math.h>

typedef struct equation_s {

    char **members;
    int len;
    double result;

} equation_t;

char **str_split(char *str, char *seps);
char **str_split_2(char *str, char *seps);
void *my_calloc(size_t type, size_t size);
char **separate_members(char *input);
void calcul(char *input, equation_t *result);
void mul_or_div(equation_t *result, int index);
void add_or_sub(equation_t *result, int index);
char **member_replace(equation_t *result, int index, char *res);
char* itoa(int value, char* str, int base);
char *dtostr(double number, int precision);
#endif
