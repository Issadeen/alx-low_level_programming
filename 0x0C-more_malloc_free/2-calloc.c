#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero.
* @nmemb: The number of elements in the array.
* @size: The size of each element in bytes.
*
* Return: A pointer to the allocated memory, or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size;
void *ptr;

/* Check if nmemb or size is 0 */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculate the total size to allocate */
total_size = nmemb * size;

/* Allocate memory using malloc */
ptr = malloc(total_size);

/* Check if malloc failed */
if (ptr == NULL)
return (NULL);

/* Set the allocated memory to zero using memset */
memset(ptr, 0, total_size);

return (ptr);
}

