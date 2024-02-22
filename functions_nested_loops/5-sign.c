#include "main.h"
/**
 * print_sign - Start of the program
 *@n: Prints the sign of a number
 * Return:0
 */
int print_sign(int n)
{
int;

if (n > '0')
{
	_putchar(n);
	_putchar('+');
	return (1);
}

else if (n == '0')
{
	_putchar(n);
	_putchar('0');
	return (0);
}
else if (n < '0')
{
	_putchar(n);
	_putchar('-');
	return (-1);
}

return (0);
}
