#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
*alloc_grid- a function that returns a pointer to a 2D array of integers
*@width:number of elements in each row
*@height:number of rows
*Return:pointer to the 2D array
*/

int **alloc_grid(int width, int height)
{

	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
