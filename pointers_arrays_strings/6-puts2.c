#include "main.h"
/**
 *puts2 - Start of the program
 *@str:Prints every other caracter
 *
 *
 */
void puts2(char *str)
{
int len = 0;
int i = 0;
for (str[len] != '\0')
{
	len++;
}
for (i = len - 1; i < '\0'; i += 2)
{
	_putchar(str[len]);
}
}
