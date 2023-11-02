#include "main.h"
#include <stdlib.h>
/**
 *  free_grid - entry point
 *  @height: roll
 *  @grid: i
 *  Rreturn: 0
 */
void free_grid(int **grid, int height)
{
	int i;

		if (grid == NULL)
		{
			return;
		}
			for (i = 0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
}
