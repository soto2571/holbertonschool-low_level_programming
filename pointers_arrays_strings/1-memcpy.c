#include "main.h"
/**
 *_memcpy - Start of the program
 *@
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_ptr = dest;
const char *src_ptr = src;

while (n-- > 0)
{
	*dest_ptr++ = *src_ptr++;
}
return (dest);
}
