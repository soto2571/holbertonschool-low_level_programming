#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Start of the prgoram
 *@n:number
 *Return:0
 */
void print_to_98(int n)
{
for (n = 1; n <= 98; n++)
{
	_putchar(',');
	_putchar(' ');
}
	_putchar(n);
}
