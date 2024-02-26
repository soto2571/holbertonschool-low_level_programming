#include "main.h"
/**
 *print_square - Start of the program
 *
 *Return:0
 */
void print_square(int size)
{
char hash = '#';
int x;
int y;

if (size > 0)
{
	for (x = 1; x <= size; x++)
	{
		for (y = 0; y < x; y++)
		{
		_putchar(hash);
		_putchar('\n');
		}
	}
}
else
{
	_putchar('\n');
}
}
