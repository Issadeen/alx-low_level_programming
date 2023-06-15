#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Concatenates two strings, up to n bytes of s2.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate.
*
* Return: A pointer to the concatenated string, or NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, concat_len;
char *concat_str;

/* Treat NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

/* Use the entire length of s2 if n >= len2 */
if (n >= len2)
n = len2;

concat_len = len1 + n;

/* Allocate memory for the concatenated string */
concat_str = malloc((concat_len + 1) * sizeof(char));
if (concat_str == NULL)
return (NULL);

/* Copy s1 to the beginning of the concatenated string */
strcpy(concat_str, s1);

/* Copy the first n bytes of s2 to the end of the concatenated string */
strncat(concat_str, s2, n);

return (concat_str);
}
