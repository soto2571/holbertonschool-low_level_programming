#include "main.h"
/**
 *_strchr - Start of the program
 *@s:String of variable
 *@c:Character variable
 *Return:0
 */
char *_strchr(char *s, char c)
{
while (*s)
{
	if (*s == c)
	s++;
	else
	return (s);
}
	if (c == '\0')
	return (s)

return (NULL);
}
