#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: input string
 *
 * Return: pointer to resulting string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}
	return (start);
}
