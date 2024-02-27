#include "main.h"
/**
 *print_square - Start of the program
 *@size:Print a square
 *Return:0
 */
void print_square(int size)
{
char hash = '#';
int x;
int y;

if (size > 0)
{
	while (x < size)
	{
		while (y < size)
		{
		_putchar(hash);
		y++;
		}
	y = 0;
	x++;
	_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
