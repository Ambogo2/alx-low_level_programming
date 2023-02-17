#include <stdio.h>
/**
 * main - main entry point
 * print possible combintations of three digits
 * Return: 0
 */
int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
				if (hundreds != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
