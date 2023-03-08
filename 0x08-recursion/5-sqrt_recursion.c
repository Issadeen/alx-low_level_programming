#include "main.h"

/**
* _sqrt_recursion_helper - Calculates the square root of a number
*
* @n: The number to find the square root of
* @x: The current guess at the square root
*
* Return: The square root of @n
*/
int _sqrt_recursion_helper(int n, int x)
{
if (x * x > n)
return (-1);
if (x * x == n)
return (x);
return (_sqrt_recursion_helper(n, x + 1));
}

/**
* _sqrt_recursion - Calculates the square root of a number using recursion
*
* @n: The number to find the square root of
*
* Return: The square root of @n, or -1 if @n does not have  natural square root
*/
int _sqrt_recursion(int n)
{
int x = 1;

return (_sqrt_recursion_helper(n, x));
}
