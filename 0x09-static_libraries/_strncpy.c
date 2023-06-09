#include "main.h"

/**
* _strncpy - Copies at most n bytes from src to dest
* @dest: The destination buffer
* @src: The source string
* @n: The maximum number of bytes to copy
*
* Return: Pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (dest_start);
}
