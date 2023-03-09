#include "main.h"


/**
* _strspn - gets the length of a prefix substring
* @s: pointer to string
* @accept: pointer to string of bytes to accept
*
* Return: number of bytes in initial segment of s which consist only of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
break;
}
return (i);
}
