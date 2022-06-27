#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid previously created
 * by alloc_gric function
 * @grid: matrix of double pointer
 * @height: rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(*(grid + x));
	}
	free(grid);
}
