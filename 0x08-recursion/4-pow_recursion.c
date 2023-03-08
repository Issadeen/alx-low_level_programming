#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: the base value
* @y: the exponent value
*
* Return: the result of x raised to the power of y, or -1 if y is negative
*/
int _pow_recursion(int x, int y)
{
/* base case */
if (y == 0)
return (1);

/* error case */
if (y < 0)
return (-1);

/* recursive case */
return (x * _pow_recursion(x, y - 1));
}
