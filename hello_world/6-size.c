#include <stdio.h>
/**
 *main - Start of the program
 *
 *Return:0
 *
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long longlongintType;
float floatType;

printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long: %zu byte(s)\n", sizeof(long long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
