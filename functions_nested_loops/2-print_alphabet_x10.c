#include "main.h"
/**
 *print_alphabet_x10 - Start of the program
 *
 *Description:Printing the alphabet ten times
 *
 *Return:Will be void
 */
void print_alphabet_x10(void)
{
int num;
char abc;

for (num = 0; num < 10; num++)
{
for (abc = 'a'; abc <= 'z'; abc++)
{
	_putchar(abc);
}
	_putchar('\n');
}

}
