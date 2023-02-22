#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a, b, c;

a = 4;
b = 6;
c = add(a, b);
printf("%d + %d = %d\n", a, b, c);

return (0);
}
