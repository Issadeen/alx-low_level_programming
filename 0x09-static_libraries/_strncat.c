#include "main.h"

/**
* _strncat - Concatenates two strings, using at most n bytes from src
* @dest: The destination string
* @src: The source string
* @n: The maximum number of bytes from src
*
* Return: Pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest)
dest++;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (dest_start);
}
