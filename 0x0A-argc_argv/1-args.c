#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints progran namr
 * @argc:counts arguments
 * @argv:arguments printed
 * Return:always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
