#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers - a function that prints numbers
*@separator:string to be printed between numbers
*@n:number of integers passed to the function
*@...:variable arguments to be printed
*Return:void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, int n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, n));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);

}
