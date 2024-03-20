#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - Start of the program
 *@array: The array
 *@size: size of the array
 *@cmp: Function being call
 *Return:The index of the first element for wich the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}

return (-1);
}
