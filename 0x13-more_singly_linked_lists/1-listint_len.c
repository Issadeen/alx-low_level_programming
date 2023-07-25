#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
* listint_len - Returns the number of elements in a linked list.
* @h: The head of the linked list.
*
* Return: The number of elements in the linked list.
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

