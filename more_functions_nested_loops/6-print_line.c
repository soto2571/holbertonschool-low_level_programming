#include "main.h"
/**
 *print_line - Start of the program
 *@n: The line
 *
 */
void print_line(int n)
{
char x = '_';

x = n;

if (n <= 0)
{
	_putchar('\n');
}
else if (n > 0)
{
_putchar(x);
}
}
