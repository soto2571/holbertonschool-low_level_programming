#include "main.h"
#include <stdio.h>
/**
 *_strcmp - Start of the program
 *@s1:String 1
 *@s2:String 2
 *Return:0
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	s1++;
	s2++;
}
if (*s1 == '\0' && *s2 == '\0')
{
	return (0);
}
else
{
	return (*s1 - *s2);
}
}
