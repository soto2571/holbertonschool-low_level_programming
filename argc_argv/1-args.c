#include <stdio.h>
/**
 *main - start of the program
 *@argc:Count the lines
 *@argv:Count the strings
 *Return:0
 */
int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc);
for (i = 0; i < argc - 1; i++)
{
	printf("%s", *argv[i]);
}
return (0);
}
