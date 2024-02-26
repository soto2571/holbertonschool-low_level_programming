#include "main.h"
/**
 *print_line - Start of the program
 *@n: The line
 *
 */
void print_line(int n)
{
int i;

char under = 95;

char slash = '\n';

for (i = 1; i <= n; i++)
{
	_putchar(under);

	if (n <= 0)
	{
	_putchar(slash);
	}
}
_putchar('\n');
}
