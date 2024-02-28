#include "main.h"
#include <stddef.h>
/**
 *print_rev - Start of the program
 *
 *@s:Variable for reverse print
 *
 */
void print_rev(char *s)
{
if (s != NULL)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}
}
