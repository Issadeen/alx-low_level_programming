#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - Creates an array of integers.
* @min: The minimum value.
* @max: The maximum value.
*
* Return: A pointer to the newly created array, or NULL on failure.
*/
int *array_range(int min, int max)
{
int *arr, size, i;

/* Check if min is greater than max */
if (min > max)
return (NULL);

/* Calculate the size of the array */
size = max - min + 1;

/* Allocate memory for the array */
arr = malloc(sizeof(int) * size);

/* Check if malloc failed */
if (arr == NULL)
return (NULL);

/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}
