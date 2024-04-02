#include "lists.h"
#include <stdlib.h>

/**
 *delete_dnodeint_at_index - start of the program
 *@head: head
 *@index: index
 *Return: 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (-1);
	}

	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
