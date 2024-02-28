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

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
}
