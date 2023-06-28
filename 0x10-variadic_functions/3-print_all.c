#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_all - a function that prints anything
*@format:arguments passed to the function
*@...:variable
*Return:void
*/

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	while (format && *ptr)
	{
		switch (*ptr)
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}

		ptr++;

		if (*ptr)
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
