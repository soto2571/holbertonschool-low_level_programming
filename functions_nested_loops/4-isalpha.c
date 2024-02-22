#include "main.h"
/**
 *_isalpha - Start of the program
 *
 *@c: Check for alphabetic character
 *
 *Return:0
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
return (0);
}
