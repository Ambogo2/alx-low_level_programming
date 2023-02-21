#include "main.h"
/**
 * main - main entry point
 * Return: 0
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
