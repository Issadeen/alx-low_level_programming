#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: The string to be converted.
*
* Return: The integer value of the string.
*/

int _atoi(char *s)
{
int i, sign, num;

i = num = 0;
sign = 1;
while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
return (num *sign);
}
