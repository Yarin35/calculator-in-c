/*
** EPITECH PROJECT, 2023
** itoa.c
** File description:
** itoa function
*/

#include "calcul.h"

void reverse(char* str, int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    str[length] = '\0';
}

char* itoa(int value, char* str, int base)
{
    // Handle the case for 0 separately
    if (value == 0) {
        str[0] = '0';
        str[1] = '\0';
        return str;
    }

    int is_negative = 0;
    int i = 0;

    // Handle negative numbers for base 10
    if (value < 0 && base == 10) {
        is_negative = 1;
        value = -value;
    }

    // Convert the value to the string representation
    while (value != 0) {
        int rem = value % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        value = value / base;
    }

    // Add the negative sign if necessary
    if (is_negative)
        str[i++] = '-';

    str[i] = '\0';
    reverse(str, i);
    return str;
}
