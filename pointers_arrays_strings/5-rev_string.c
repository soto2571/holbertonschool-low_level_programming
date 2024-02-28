#include "main.h"
#include <stdio.h>
/**
 *rev_string - Start of the program
 *@s: Reverse the string
 *
 */
void rev_string(char *s)
{
int i = 0;
int len = 0;
char temp;

while (s[len] != '\0')
{
	len++;
}
for (i = len - 1; i >= len / 2; i--)
{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	printf("this is with i: %c", s[len - i - 1]);
	printf("this is with out i : %c", s[len - 1]);
}
}
