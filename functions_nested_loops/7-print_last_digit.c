#include "main.h"
/**
 *print_last_digit - Start of the program
 *@r:Print last digit of the number
 *Return:0
 */
int print_last_digit(int r)
{
int lastDigit;

lastDigit = r % 10;

if (lastDigit < 0)
{
	lastDigit = -lastDigit;
}
_putchar('0' + lastDigit);

return (lastDigit);
}
