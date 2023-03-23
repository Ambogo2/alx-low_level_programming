#include <stdio.h>
#include <stdarg.h>


/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/



void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	char c;
	int i;
	float f;
	char * s;
	int len = strlen(format);

	for (int j = 0; j < len; j++)
       	{
		switch (format[j])
	       	{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
				case 's':
			s = va_arg(args, char*);
			if (s == NULL)
		       	{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			break;
			default:
			continue;
		}
		if (j < len - 1)
	       	{
			printf(", ");
		}
	}

	printf("\n");

	va_end(args);
}
