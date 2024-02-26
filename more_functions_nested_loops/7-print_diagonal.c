#include "main.h"
/**
 *print_diagonal - Start of the program
 *@n: Draws in diagonal
 *Return:0
 */
void print_diagonal(int n)
{
int x;

int y;
if (n > 0)
{
for (x = 0; x <= n; x++)
{
	for (y = 0; y < x; y++)
	{
		if (y != 0)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
else
{
_putchar('\n');
}
}
