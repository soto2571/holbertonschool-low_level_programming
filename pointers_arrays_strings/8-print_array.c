#include "main.h"
#include <stdio.h>
/**
 *print_array - Start of the program
 *@n:Prints elements on array
 *@a:Have values of array
 *
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", a[i]);

	if (i < n - 1)
	{
		printf(", ");
	}
}
printf("\n");
}
