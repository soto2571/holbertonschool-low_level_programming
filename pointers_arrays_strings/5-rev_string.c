#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - Start of the program
 *@s: Reverse the string
 *
 */
void rev_string(char *s)
{
int len = strlen(s);

char *start = s;
char *end = s + len - 1;

while (start < end)
{
	char temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
}
}
