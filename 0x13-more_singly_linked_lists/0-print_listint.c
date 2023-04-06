#include "lists.h"
#include <stdio.h>
/**
 * print_listint - to Print all the elements of a listint_t list.
 * @h: A pointer that points to the head of the list_t list.
 *
 * Return:  numbers of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_node++;
	}
	return (n_node);
}

