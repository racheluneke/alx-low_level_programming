#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - to Add a new node at the beginning
 *               of a listint_t list.
 * @head:  pointing to the address of the
 *        head of the listint_t list.
 * @n:  integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - an address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t_new;

	t_new = (listint_t *)malloc(sizeof(listint_t));
	if (t_new == NULL)
		return (NULL);

	t_new->n = n;
	t_new->next = *head;
	*head = t_new;

	return (t_new);
}

