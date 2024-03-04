#include "main.h"
/**
 *_memset - Start of the program
 *@s:Constant byte
 *@b:Byte
 *@n:Number of byte
 *Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n-- > 0)
{
		*ptr++ = b;
}

return (s);
}
