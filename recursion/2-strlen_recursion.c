#include "main.h"
/**
 *_strlen_recursion - Start of the program
 *Description: This code will return the string lenght
 *@s: Strin len
 *Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return (0);
}
return (1 + _strlen_recursion(s + 1));
}
