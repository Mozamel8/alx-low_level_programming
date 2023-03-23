#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print string
 * @separator:character to print
 * @n:number of string
 * @...:argument
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *st;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(str, char*);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
