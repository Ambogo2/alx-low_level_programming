#include <stdio.h>
/**
 * main - main entry point
 * print combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
