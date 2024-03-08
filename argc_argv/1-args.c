#include <stdio.h>
/**
 *main - start of the program
 *@argc:Count the lines
 *@argv:Count the strings
 *Return:0
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);

for (int i = 1; i < argc; i++)
{
	printf("%d: %s\n", i, argv[i]);

}
	return (0);
}

