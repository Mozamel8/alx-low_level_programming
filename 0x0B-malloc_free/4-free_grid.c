#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free two dimenssion array
 * @grid: array to be free
 * @height:colum array
 * Return:free grid
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
