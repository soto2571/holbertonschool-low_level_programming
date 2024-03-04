#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 *_strspn - Start of the program
 *@s:Initial segment
 *@accept:Bytes
 *Return:count
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0' && strchr(accept, *s) != NULL)
{
	count++;
	s++;
}
return (count);
}
