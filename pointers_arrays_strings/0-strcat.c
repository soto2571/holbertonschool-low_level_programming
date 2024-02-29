#include "main.h"
#include <stdio.h>
/**
 *_strcat - Start of the program
 *
 *@dest:
 *
 *@src:
 *
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
char *string1 = dest;
char *string2 = src;

while (string1 != '\0')
{
	string1++;
}
while (*string2 != '\0')
{
	*string1 = *string2;
	string1++;
	string2++;
}
*string1 = '\0';

return (dest);
}
