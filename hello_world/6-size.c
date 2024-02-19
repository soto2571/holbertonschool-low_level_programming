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
long long longlongType;
float floatType;

printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long: %zu bytes\n", sizeof(longlongType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
