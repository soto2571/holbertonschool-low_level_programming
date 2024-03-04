#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String to search.
 * @c: Character to locate.
 * Return: Pointer
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

