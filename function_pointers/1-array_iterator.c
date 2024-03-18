#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - iterates in the array
 *@array: the array
 *@size: the size of the array
 *@action: a pointer to the fucntion
 *
 *
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
if (array == NULL || action == NULL)
	return;
while (size-- > 0)
{
	action(*array);
	array++;
}
}
