#include "main.h"
#include <stdio.h>
/**
 *_strncat - Start of the program
 *
 *@dest:The destination string
 *@src:The source string
 *@n:The maximum number of bytes to use
 *Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *string1 = dest;
char *string2 = src;

while (*string1 != '\0')
{
	string1++;
}
while (*string2 >= '\0' && n  > 0) 
{
	*string1 = *string2;
	string1++;
	string2++;
	n--;
}
*string1 = '\0';

return (dest);
}
