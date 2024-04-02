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
	unsigned int count = 0;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (-1);
	}

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	dlistint_t *temp = current->next;
	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;

	free(temp);

	return (1);
}
