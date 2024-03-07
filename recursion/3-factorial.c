#include "main.h"
/**
 *factorial - Start of the program
 *
 *@n: Value of number
 *Return: Positive or negative
 */
int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
else if (n == 0 || n == 1)
{
	return (1);
}
else
{
	return (n * factorial(n - 1));
}
}
