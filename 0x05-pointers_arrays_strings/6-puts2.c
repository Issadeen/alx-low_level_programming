#include "main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character, followed by a new line.
*
* @str: pointer to the string to print.
7*
* Return: void.
*/
void puts2(char *str)
{
int i;
for (int i = 0; i < strlen(str); i += 2)
{
    putchar(str[i]);
}
_putchar('\n');
}
