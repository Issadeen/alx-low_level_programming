#include <stdio.h>

/**
* swap_int - swaps the values of two integers
* @a: pointer to the first integer to swap
* @b: pointer to the second integer to swap
*
* Return: void
*/
void swap_int(int *a, int *b)
{
mint temp;

temp = *a;
*a = *b;
*b = temp;
}

/**
* main - check the swap_int function
*
* Return: Always 0
*/
int main(void)
{
int a = 98, b = 42;

printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);

return (0);
}
