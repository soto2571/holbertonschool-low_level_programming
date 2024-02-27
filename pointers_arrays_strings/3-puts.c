#include "main.h"
/**
 *_puts - Start of the program
 *@str: Variable that prints
 *
 *
 */
void _puts(char *str)
{
if (str != NULL)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
}
