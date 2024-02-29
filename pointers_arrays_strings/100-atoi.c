#include "main.h"
/**
 *_atoi - Start of the program
 *
 *@s:Convert a string to an integer
 *
 * Return:0
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {
	if (*s == '-')
		sign *= -1;

	else if (*s >= '0' && *s <= '9')

	else if (num > 0)
		break;

	} while (*s++);

return (num * sign);
}
