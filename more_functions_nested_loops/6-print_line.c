#include "main.h"
/**
 *print_line - Start of the program
 *@n: The line
 *
 */
void print_line(int n)
{
int i;
for (i = 1; i <= n; n++)
{
	_putchar('_');
}
	if (n <= 0)
	{
	_putchar('\n');
	}
}

