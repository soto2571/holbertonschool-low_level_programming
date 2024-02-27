#include "main.h"
/**
 *print_triangle - Start of the program
 *@size:Prints a triangle
 *
 *
 */
void print_triangle(int size)
{
int x;

int y;

if (size > 0)
{
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= x; y++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
