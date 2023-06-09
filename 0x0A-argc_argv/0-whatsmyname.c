#include <stdio.h>
#include <stdlib.h>

/**
*main- prints the name of a program
*@argc:counts arguments
*@argv:arguments printed
*Return: always 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
