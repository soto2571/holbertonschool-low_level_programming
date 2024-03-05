#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - Start of the program
 *@s:String
 *@accept:The set of byte
 *Return:A pointer to a byte
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
	char *currentAccept = accept;

	while (*currentAccept != '\0')
	{
		if (*s == *currentAccept)
		{
			return (s);
		}
		currentAccept++;
	}
	s++;
}
return ((char *)0);
}
