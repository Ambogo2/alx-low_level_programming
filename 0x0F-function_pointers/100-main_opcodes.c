#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the opcodes of its own main function
*@argc:The numeber of argumets supplied to the program
*@argv:an array of poiters to the argumets
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;
	int num_bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", array[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
