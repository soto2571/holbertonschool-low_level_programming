#include "main.h"
#include <stdio.h>
/**
 *rev_string - Start of the program
 *@s: Reverse the string
 *
 */
void rev_string(char *s)
{
int i;
int j;
int len = 0;

for (i = 0; i != '\0'; i++)
{
	len++;
}
for (j = i; j > 0; j--)
{
	char temp = s[i];
	s[i] = s[j];
	s[j] = temp;
}
}
