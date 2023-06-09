#include <stdio.h>
#include <stdlib.h>

/**
*main - prints arguments
*@argc: counts arguments
*@argv: arguments
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}
