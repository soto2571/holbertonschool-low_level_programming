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

if (n > 0)
{
	for (x = 1; x <= n; x++)
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
