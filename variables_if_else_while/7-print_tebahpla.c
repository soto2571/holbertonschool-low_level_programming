#include <stdio.h>
/**
 *main - Start of the program
 *
 *Return:0
 */
int main(void)
{
char alphabet = 'z';

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
	putchar(alphabet);
}
putchar('\n');

return (0);
}
