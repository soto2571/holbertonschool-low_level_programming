#include <stdio.h>
/**
 *main - Start of the program
 *
 *Return:0
 */
int main(void)
{
char alphabet = 'a';

for (; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'q' && alphabet != 'e')
	putchar(alphabet);

}
putchar('\n');
return (0);
}

