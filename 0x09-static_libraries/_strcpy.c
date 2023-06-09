#include "main.h"

/**
* _strcpy - Copies a string from src to dest
* @dest: The destination buffer
* @src: The source string
*
* Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (dest_start);
}
