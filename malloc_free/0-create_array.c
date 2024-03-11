#include <stdlib.h>
#include "main.h"
/**
 *create_array - Start of the program
 *@size: Size of bytes in the array
 *@c:Char type
 *Return:Returns a pointer to the array or NULL if its fails
 *
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = (char *)malloc(size * sizeof(char));
if (size == 0 || array == NULL)
{
	return (0);
}
for (i = 0; i < size; i++)
{
	array[i] = c;
}
array[i] = '\0';
return (array);
}
