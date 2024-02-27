#include "main.h"
/**
 *
 *
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
		for (y = 0; y < x; y++)
		{
			if (y != 0)
			{
				_putchar(' ');
			}
		}
		_putchar('#');
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
