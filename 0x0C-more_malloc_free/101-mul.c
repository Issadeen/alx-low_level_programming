#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* multiply - Multiplies two positive numbers.
* @num1: First number.
* @num2: Second number.
*
* Return: Result of the multiplication.
*/
void multiply(char *num1, char *num2)
{
int i, j, len1, len2, *result, carry, n1, n2, sum, size;

len1 = strlen(num1);
len2 = strlen(num2);
size = len1 + len2;

result = calloc(size, sizeof(int));
if (result == NULL)
{
printf("Error\n");
exit(98);
}

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
n1 = num1[i] - '0';

for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';

sum = (n1 * n2) + result[i + j + 1] + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}

if (carry > 0)
result[i + j + 1] += carry;
}

i = 0;
while (i < size && result[i] == 0)
i++;

if (i == size)
printf("0");
else
{
while (i < size)
printf("%d", result[i++]);
}

printf("\n");
free(result);
}

/**
* is_valid_number - Checks if a string is a valid number (contains only digits).
* @str: String to check.
*
* Return: 1 if valid, 0 otherwise.
*/
int is_valid_number(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
return 0;
}

return 1;
}

/**
* main - Entry point of the program.
* @argc: Number of command-line arguments.
* @argv: Array of command-line arguments.
*
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
printf("Error\n");
return 98;
}

multiply(argv[1], argv[2]);

return 0;
}

