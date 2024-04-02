#include <stdlib.h>
#include "list.h"
/**
 *free_list - freeing the list
 *@head: the head
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;

		head = head->next;

		free(temp->str);

		free(temp);
	}
}
