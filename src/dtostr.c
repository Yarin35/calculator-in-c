/*
** EPITECH PROJECT, 2023
** dtostr.c
** File description:
** dtostr.c
*/

#include "calcul.h"

char* dtostr(double number, int precision)
{
    int wholePart = (int)number;
    double decimalPart = number - wholePart;
    int length = 0;
    int tempWholePart = wholePart;

    do {
        length++;
        tempWholePart /= 10;
    } while (tempWholePart != 0);

    if (precision > 0) {
        length += precision + 1; // +1 for the decimal point
    }

    // Allocate memory for the string
    char* str = (char*)malloc((length + 1) * sizeof(char)); // +1 for null terminator

    // Convert whole part to string
    char* current = str + length - 1; // Start from the last character

    do {
        *current = '0' + (wholePart % 10);
        wholePart /= 10;
        current--;
    } while (wholePart != 0);

    // Handle decimal part
    if (precision > 0) {
        *current = '.'; // Place the decimal point
        current++;

        int decimalDigits = 0;
        while (decimalDigits < precision) {
            decimalPart *= 10;
            int digit = (int)decimalPart;
            decimalPart -= digit;
            *current = '0' + digit;
            current++;
            decimalDigits++;
        }
    }

    *current = '\0'; // Null terminator

    return str;
}
