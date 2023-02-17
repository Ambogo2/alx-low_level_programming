#include <stdio.h>
/**
 * main - main entry point
 * print base16 numbers in lovercase
 * Return: 0
 */
int main(void)
{
	int number = '0';
	int letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
