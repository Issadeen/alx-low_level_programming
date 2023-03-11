#include <stdio.h>
#include <stdlib.h>
/**
* count_coins - counts minimum number of coins needed to make change
* @n: amount of change needed
*
* Return: minimum number of coins
*/
int count_coins(int n)
{
int coins = 0;

while (n > 0)
{
if (n >= 25)
n -= 25;
else if (n >= 10)
n -= 10;
else if (n >= 5)
n -= 5;
else if (n >= 2)
n -= 2;
else
n -= 1;
coins++;
}

return (coins);
}

/**
* main - prints the minimum number of coins to make change for an amount of dau
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char **argv)
{
int n;

if (argc != 2)
{
printf("Error\n");
return (1);
}

n = atoi(argv[1]);

if (n < 0)
{
printf("0\n");
return (0);
}

printf("%d\n", count_coins(n));
return (0);
}

