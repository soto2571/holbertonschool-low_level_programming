#include "main.h"
#include <stdio.h>
/**
 *
 *reset_to_98 - Start of the program
 *@n: Pointer
 */
void reset_to_98(int *n)
{
*n = 98;
}
int main(voie)
{
int num = 5;
printf("Before: %d\n", num);

reset_to_98(&num);

printf("After: %d\n", num);

return (0);

}
