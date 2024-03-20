#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_printchar - Start of the program
 *@list: va_list passed to function
 */

void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 *_printstr - print stirng
 *@list: va_list passed to function
 */
void _printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
		printf("%s", s);
}
/**
 *_printfloat - print float
 *@list: va_list passed to function
 */
void _printfloat(va_list list)
{
printf("%d", va_arg(list, int));
}

/**
 *print_all - print anything
 *@format: string
 */

void print_all(const char * const format, ...)
{
unsigned int i, j;
va_list args;
char *sep;

checker storage[] = {
	{ "c", _printchar },
	{ "f", _printchar },
	{ "s", _printchar },
	{ "i", _printchar },
};

i = 0;
sep = "";
va_start(args, format);
while (format != NULL && format[i / 4] != '\0')
{
	j = i % 4;
	if (storage[j].type[0] == format[i / 4])
	{
		printf("%s", sep);
		storage[j].f(args);
		sep = ", ";
	}
	i++;
}
printf("\n");
va_end(args);
}

