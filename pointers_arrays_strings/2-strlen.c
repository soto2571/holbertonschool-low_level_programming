#include "main.h"
#include <stdio.h>
/**
 *_strlen - Start of the program
 *@s: value s
 *Return:len
 *
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
	len++;
}

return (len);
}
