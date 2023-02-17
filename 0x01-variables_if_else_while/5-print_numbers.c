#include <stdio.h>
/**
 * main - main entry point
 * print numbers
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');
	return (0);
}
