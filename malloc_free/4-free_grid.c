#include "main.h"
#include <stdlib.h>
/**
 *free_grid - Start of the program
 *@grid: This is for the table
 *@height: The height of the grid
 */
void free_grid(int **grid, int height)
{
int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
