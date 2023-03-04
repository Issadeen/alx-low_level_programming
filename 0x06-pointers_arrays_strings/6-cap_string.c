/**
 * cap_string - capitalizes all words of a string
 * @s: the string to be capitalized
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i - 1] == sep[0])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 'a' - 'A';
		}
		else
		{
			for (j = 1; j < (int)sizeof(sep); j++)
			{
				if (s[i - 1] == sep[j])
				{
					if (s[i] >= 'a' && s[i] <= 'z')
						s[i] -= 'a' - 'A';
					break;
				}
			}
		}
	}

	return (s);
}
