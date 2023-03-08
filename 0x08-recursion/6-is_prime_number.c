#include "main.h"

/**
* is_prime_helper - helper function to check if a number is prime or not
* @n: the number to be checked
* @i: the divisor
*
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_helper(int n, int i)
{
/* base case */
if (n <= 1)
return (0);
if (i == n)
return (1);
if (n % i == 0)
return (0);
/* recursive case */
return (is_prime_helper(n, i + 1));
}
/**
* is_prime_number - checks if a number is prime
* @n: the number to be checked
*
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
return (is_prime_helper(n, 2)); /* start checking from 2 */
}
