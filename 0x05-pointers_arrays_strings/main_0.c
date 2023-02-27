#include <stdio.h>

/* Function prototype */
void swap_int(int *a, int *b);

int main(void)
{
int a = 98;
int b = 42;

printf("Before swap: a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("After swap: a=%d, b=%d\n", a, b);

return (0);
}
