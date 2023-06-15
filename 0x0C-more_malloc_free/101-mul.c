#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - a function that multiplies two positive numbers
 * @num1: first number to be multiplied
 * @num2: second number to be multiplied
 * Return: result of multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_positive_number - a function that checks if the given string is a positive number
 * @str:string to check
 * Return:1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = multiply(num1, num2);

	printf("%d\n", mul);

	return (0);
}
