#include "main.h"
/**
* leet - encodes a string into 1337
* @str: the string to encode
*
* Return: the encoded string
*/
char *leet(char *str)
{
char *s = str;
char *letters = "aAeEoOtTlL";
char *numbers = "4433007711";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}

return (str);
}
