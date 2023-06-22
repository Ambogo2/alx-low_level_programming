#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - a function that prints strings
*@separator:string to be printed between the strings
*@n:number of strings
*@...:variable
*Return:void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
