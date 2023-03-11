#include "main.h"

/**
* _strlen - computes the length of a string
* @s: the string to compute the length of
*
* Return: the length of s
*/
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
