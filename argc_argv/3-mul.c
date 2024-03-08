#include "main.h"
#include <stdio.h>
/**
 *main - Star of the program
 *@argc: Number of line
 *@argv: Number of strings
 *Return:0
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
