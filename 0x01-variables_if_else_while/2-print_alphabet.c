#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
