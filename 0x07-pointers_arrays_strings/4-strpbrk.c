#include <stdio.h>

char *_strpbrk(char *s, char *accept)
{
char *p;
int i;

for (i = 0; s[i]; i++)
{
for (p = accept; *p; p++)
{
if (s[i] == *p)
{
return (&s[i]);
}
}
}
return (NULL);
}

