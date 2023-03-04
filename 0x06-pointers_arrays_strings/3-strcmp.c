/**
* _strcmp - compares two strings
* @s1: first string to compare
* @s2: second string to compare
*
* Return: negative integer if s1 is less than s2,
*         positive integer if s2 is less than s1,
*         and 0 if s1 and s2 are equal
*/
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
if (s1[i] == '\0' && s2[i] == '\0')
return (0);

return (s1[i] - s2[i]);
}

