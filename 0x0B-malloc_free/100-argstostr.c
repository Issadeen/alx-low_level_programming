#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: argument count
* @av: argument vector
*
* Return: pointer to new string or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0;
int len = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

s = malloc(sizeof(char) * (len + ac + 1));
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
s[k] = av[i][j];
s[k++] = '\n';
}
s[k] = '\0';

return (s);
}
