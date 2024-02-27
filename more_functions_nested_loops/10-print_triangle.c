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
	for (x = size; x >= 1; x--)
	{
		for (y = 1; y <= size - x; y++)
		{
			_putchar(' ');
		}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
else
{
_putchar('\n');
}
}
