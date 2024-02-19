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

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long: %zu byte(s)\n", sizeof(longlongType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
