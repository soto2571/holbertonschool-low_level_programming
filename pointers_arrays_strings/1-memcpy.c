#include "main.h"
/**
 *_memcpy - Start of the program
 *@dest:Destination memory
 *@src:Source memory
 *n:Number of bytes to copy
 *Return:dest
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
