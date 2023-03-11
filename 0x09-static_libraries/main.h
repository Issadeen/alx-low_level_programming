#ifndef MAIN_H
#define MAIN_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* _islower - checks for lowercase character */
int _islower(int c);

/* _isalpha - checks for alphabetic character */
int _isalpha(int c);

/* _abs - computes the absolute value of an integer */
int _abs(int n);

/* _isupper - checks for uppercase character */
int _isupper(int c);

/* _isdigit - checks for a digit (0 through 9) */
int _isdigit(int c);

/* _strlen - returns the length of a string */
int _strlen(char *s);

/* _puts - prints a string to stdout */
void _puts(char *s);

/* _strcpy - copies the string pointed to by src, including the null byte, to the buffer pointed to by dest */
char *_strcpy(char *dest, char *src);

/* _atoi - converts a string to an integer */
int _atoi(char *s);

/* _strcat - concatenates two strings */
char *_strcat(char *dest, char *src);

/* _strncat - concatenates two strings */
char *_strncat(char *dest, char *src, int n);

/* _strncpy - copies a string */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp - compares two strings */
int _strcmp(char *s1, char *s2);

/* _memset - fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* _memcpy - copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* _strchr - locates a character in a string */
char *_strchr(char *s, char c);

/* _strspn - gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* _strpbrk - searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);

/* _strstr - locates a substring */
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
