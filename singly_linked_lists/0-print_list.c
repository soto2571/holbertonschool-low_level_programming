#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - Print all the list content
 *@h: Pointer to the head of the list
 *Return: Count
 */



size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%zu] (nill)\n", count);
		else
			printf("[%zu] %s\n", count, current->str);
	count++;
	current = current->next;
}

return (count);

}
