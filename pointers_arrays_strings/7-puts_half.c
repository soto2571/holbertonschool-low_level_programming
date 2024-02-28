#include "main.h"
/**
 *puts_half - Start of the program
 *@str: Prints half of the string
 *
 */
void puts_half(char *str)
{
int len;
int i = 0;
int half;
int start_index;

while (str[i] != '\0')
{
	i++;
}

len = i;

half = (len - 1) / 2;


for (start_index = half; start_index <= len - 1; start_index++)
{
	if (start_index % 2 == 0)
	{
		_putchar(str[start_index]);
	}
	_putchar('\n');
}
}

