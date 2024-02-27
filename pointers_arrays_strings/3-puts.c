#include "main.h"
#include <stddef.h>
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
		putchar(*str);
		str++;
	}
	putchar('\n');
}
}
