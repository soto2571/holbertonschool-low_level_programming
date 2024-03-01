#include "main.h"
#include <stdio.h>
/**
 *_strncpy - Start of the program
 *Description:It will copy the string
 *@dest:Pointer to destination
 *@src:source for string
 *@n:Number of bytes
 *Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *strin1 = dest;
	char *string2 = src;

	while (*string2 != '\0' && n > 0)
	{
	*string1 = *string2;
	string1++;
	string2++;
	n--;
	}
while (n > 0)
{
	*string1 = '\0';
	string1++;
	n--;
}
	return (dest);
}
