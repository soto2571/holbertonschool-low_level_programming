#include "lists.h"
/**
 *dlistint_len - start of the program
 *@h: argument
 *Return: node count
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}

	return (node_count);
}
