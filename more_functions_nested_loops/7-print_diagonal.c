#include "main.h"
/**
 *print_diagonal - Start of the program
 *@n: Draws in diagonal
 *Return:0
 */
void print_diagonal(int n)
{
int i;

char slash = '\n';

char line = 92;

for (i = 1; i <= n; i++)
{
	_putchar(line);
	_putchar('\n');

	if (n <= 0)
	{
	_putchar(slash);
	}
}
}
