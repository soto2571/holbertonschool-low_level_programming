#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Start of the prgoram
 *@n:number
 *Return:0
 */
void print_to_98(int n)
{

if (n == 0)
{
for ( ; n <= 98; n++)
{
	printf("%d", n);
	printf(",");
	printf(" " );
}
}
if (n > 0)
{
for ( ; n <= 98; n++)
{
	printf("%d", n);
	printf(",");
	printf(" ");
}
}
if (n < 0)
{
for ( ; n <=98; n--)
{
	printf("%d", n);
	printf(",");
	print(" ");
}
}
}
