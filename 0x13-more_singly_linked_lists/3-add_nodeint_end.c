#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - to Add a new node at the
 *                   end of a listint_t list.
 * @head:  pointers to the address of the
 *        head of the listint_t list.
 * @n: integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}

