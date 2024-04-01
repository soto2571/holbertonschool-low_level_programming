#include "lists.h"
#include <stddef.h>

/**
 *list_len - Len of the list
 *@h: Content
 *Return: Count
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	Node* current = h->head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return count;

}
