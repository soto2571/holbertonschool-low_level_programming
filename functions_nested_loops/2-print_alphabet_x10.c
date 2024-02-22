#inlcude "main.h"
/**
 *print_alphabet_x10 - Start of the program
 *
 *Return:Will be void
 */
void print_alphabet_x10(void)
{
int num;
char abc;

for (num = 0; num <= 10; num++)
{
for (abc = 'a'; abc <= 'z'; abc++)
	_putchar(abc);
	_putchar('\n');
}

}
