#include "main.h"
/**
 *_strchr - Start of the program
 *@s:String of variable
 *@c:Character variable
 *Return:0
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
	if (*s == c)
	{
	return ((char *)s);
	}
	s++;
}


return ((char *)0);
}
