#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2dim array
 * @grid: 2nd grid
 * @height: height dimention of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
