#include "main.h"

/**
 * free_grid -> This removes memory allocation
 * @grid:This is the grid to be freed
 * @height:This is the height of matrix
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
