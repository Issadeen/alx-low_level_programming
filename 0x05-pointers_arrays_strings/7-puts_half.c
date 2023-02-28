#include "main.h"
#include <stdio.h>

/**
 * print_half_string - Prints half of a string, followed by a new line
 * @str: The string to print
 *
 * Return: void
 */
void print_half_string(char *str)
{
    int i, length;

    length = 0;
    while (*(str + length) != '\0')
        length++;

    if (length % 2 == 0)
    {
        for (i = length / 2; i < length; i++)
            _putchar(*(str + i));
    }
    else
    {
        for (i = (length / 2) + 1; i < length; i++)
            _putchar(*(str + i));
    }

_putchar('\n');
}
