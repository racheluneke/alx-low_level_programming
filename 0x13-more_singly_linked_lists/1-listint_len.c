#include "lists.h"
#include <stdio.h>
/**
 * listint_len - that Returns the number of elements
 *               in a linked listint_t list.
 * @h:  pointer to the head of the listint_t list.
 *
 * Return: numbers of element in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t p_node = 0;

	while (h != NULL)
	{
		h = h->next;
		p_node++;
	}
	return (p_node);
}

