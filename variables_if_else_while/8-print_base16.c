#include <stdio.h>
/**
 *main - Start of the program
 *
 *Return:0
 */
int main(void)
{
int zero = 0;
char alpha = 97;

for (zero = 0; zero <= 9; zero++)
{
	putchar(zero + '0');
}
for (alpha = 97; alpha <= 102; alpha++)
{
	putchar(alpha);
}
putchar('\n');

return (0);
}
