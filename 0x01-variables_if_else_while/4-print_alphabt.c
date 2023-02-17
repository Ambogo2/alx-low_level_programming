#include <stdio.h>
/**
 * main - main entry point
 * print alphabet but less q and e
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'q') && (letter != 'e'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
