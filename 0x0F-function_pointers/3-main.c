#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
*main - main function
*@argc:number of arguments
*@argv:array of poniters to the argument
*Return: Always 0
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, result;
	int (*op_fun)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op_fun = get_op_func(operator);

	if (op_fun == NULL)
	{
		printf("Error\n");
		return (1);
	}
	result = op_fun(num1, num2);

	printf("%d\n", result);
	return (0);
}
