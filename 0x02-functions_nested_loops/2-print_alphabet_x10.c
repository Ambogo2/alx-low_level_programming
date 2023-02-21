#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			++l;
		}
	++i;
	_putchar('\n');
	}
}
