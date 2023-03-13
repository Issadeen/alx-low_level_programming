#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: string to duplicate
*
* Return: pointer to new string, or NULL if str = NULL or if insufficient
* memory was available
*/
char *_strdup(char *str)
{
char *new_str;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

new_str = malloc(sizeof(char) * (len + 1));

if (new_str == NULL)
return (NULL);

for (i = 0; i < len; i++)
new_str[i] = str[i];

new_str[len] = '\0';

return (new_str);
}
