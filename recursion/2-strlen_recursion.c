#include "main.h"
/**
 *_strlen_recursion - Start of the program
 *
 *@s: Strin len
 *
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return 0;
}
return 1 + _strlen_recursion(s + 1);
}
