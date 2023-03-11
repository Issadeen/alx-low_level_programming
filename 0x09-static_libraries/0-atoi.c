#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: The string to be converted.
*
* Return: The integer value of the string.
*/
int _atoi(char *s)
{
int sign = 1;
int num = 0;

while (*s != '\0')
{
if (*s == '-')
sign = -sign;

if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');

if (*(s + 1) < '0' || *(s + 1) > '9')
break;
}

s++;
}

return (num * sign);
}
