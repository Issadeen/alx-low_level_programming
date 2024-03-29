#ifndef LISTS_H
#define LISTS_H

/* Struct definition for listint_t */
typedef struct listint_s
{
	    int n;
	        struct listint_s *next;
} listint_t;

/* Function prototype for print_listint */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */

