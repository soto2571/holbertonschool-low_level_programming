#include "main.h"
/**
 *_strchr - Start of the program
 *@s:String of variable
 *@c:Character variable
 *Return:0
 */
char *_strchr(char *s, char c)
{
int index = 0;
while (*s != '\0')
{
	if (*s == c)
	{
		return (index);
	}
	s++;
	index++;
}


return (-1);
}
