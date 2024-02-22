#include "main.h"
/**
 * print_sign - Start of the program
 *
 * Return:0
 */
int print_sign(int n)
{
int n;

if (n > '0')
{
	_putchar(n);
	_putchar('+');
	return (1);
}

else if (n = '0')
{
	_putchar(n);
	_putchar('0');
	return (0);
}
else if (n < '0')
{
	_putchar(n);
	_putchar('-');
	return ('-1');
}

return (0);
}
