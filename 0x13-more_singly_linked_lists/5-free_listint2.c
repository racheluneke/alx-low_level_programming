#include "lists.h"

/**
* free _ listint2 - to frees a listint_t list
* sets the head to NULL
* @head: the pointer to pointer to head node
*
* Return: no return
*/
void free_listint2(listint_t **head)
{
	listint_t *p_temp;

	if (head)
	{
		while (*head)
		{
			p_temp = *head;
			*head = p_temp->next;
			free(p_temp);
		}
	}
}

