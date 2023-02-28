#include "main.h"
#include <string.h>

/**
 * print_half_string - Prints the second half of a string
 *
 * @str: The input string
 */
void print_half_string(char *str)
{
    int length = strlen(str);

    if (length % 2 == 0)
    {
        for (int i = length / 2; i < length; i++)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        for (int i = (length / 2) + 1; i < length; i++)
        {
            _putchar(str[i]);
        }
    }

    _putchar('\n');
}

