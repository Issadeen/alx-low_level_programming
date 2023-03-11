#include "main.h"

/**
* _strcpy - copies the string pointed to by src to
* the buffer pointed to by dest, including the null byte
* @dest: the buffer to copy to
* @src: the string to copy
*
* Return: a pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
