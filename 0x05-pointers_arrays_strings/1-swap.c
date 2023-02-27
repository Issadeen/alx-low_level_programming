#include <stdio.h>

/* function prototype */
void swap_int(int *a, int *b);

int main(void)
{
int x = 10;
int y = 20;

printf("Before swap: x = %d, y = %d\n", x, y);

/* call the swap_int function to swap x and y */
swap_int(&x, &y);

printf("After swap: x = %d, y = %d\n", x, y);

return 0;
}

/* function definition */
void swap_int(int *a, int *b)
{int temp;

temp = *a;
*a = *b;
*b = temp;
}
