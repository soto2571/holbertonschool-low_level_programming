#include <stdio.h>
/**
 *main - Start of the program
 *
 *Return:0
 */
int main(void)
{
char alphabet = 'a';
char ALPHABET = 'A';

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
{
	putchar(ALPHABET);
}
	putchar('\n');
	return (0);
}
