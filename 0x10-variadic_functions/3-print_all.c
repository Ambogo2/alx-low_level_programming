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
	int i = 0;
	char *str;
	char *del = "";

	va_start(args, format);


	if (format)
	{

		while (format[i])
		{

			switch (format[i])
			{
				case 'c':
					printf("%s%c", del, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", del, va_arg(args, int));
					break;

				case 'f':
					printf("%s%f", del, va_arg(args, double));
					break;

				case 's':
					str = va_arg(args, char*);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", del, str);
					break;
				default:
					i++;
					continue;
			}

			del = ",";
			i++;

		}
	}
		printf("\n");
		va_end(args);
}
