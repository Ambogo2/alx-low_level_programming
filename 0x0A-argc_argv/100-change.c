#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings.
 *
 * Return: 0 if successful, 1 for an error.
 */
int main(int argc, char *argv[])
{
	int cents, change = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= denominations[i])
		{
			change += cents / denominations[i];
			cents %= denominations[i];
		}
	}

	printf("%d\n", change);
	return (0);
}
