#include <stdio.h>
/**
 *main - Start of the program
 *
 *Return:0
 */
int main(void)
{
int zeroDigit = 0;

for (zeroDigit = 0; zeroDigit <= 9 ; zeroDigit++)
{
	putchar(zeroDigit + '0');
}
putchar('\n');

return (0);
}
