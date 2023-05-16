#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees 2 dimension array
 * @grid: 2 dimension grid
 * @height: height dimension of grid
 * Description: free memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int kk = 0;

if (grid == NULL || height == 0)
return;
	for (; kk < height; kk++)
		free(grid[kk]);


	free(grid);
}

