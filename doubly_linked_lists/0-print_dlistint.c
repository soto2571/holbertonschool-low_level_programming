#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Start of the program
 * @h: argument
 * Return: node count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}
