#include "main.h"
/**
 *puts_half - Start of the program
 *@str: Prints half of the string
 *
 */
void puts_half(char *str)
{
int len = 0;
int i = 0;
int j;

while (str[i] != '\0')
{
	len++;
	i++;
}

int start_index;

if (len % 2 == 0)
{
	start_index = len / 2;
}
else
{
	start_index = (len - 1) / 2;
}
for (j = start_index; j < len; j++)
{
	_putchar(str[j]);
}
_putchar('\n');
}

