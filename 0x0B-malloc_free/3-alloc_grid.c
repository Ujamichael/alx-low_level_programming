#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: column
 * @height: roll
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **bold;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	bold = (int **)malloc(height * sizeof(int *));
	if (bold != NULL)
	{
		for (i = 0; i < height; i++)
		{
			bold[i] = (int *)malloc(width * sizeof(int));
			if (bold[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(bold[j]);
				}
				free(bold);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				bold[i][j] = 0;
			}
		}
		return (bold);
	}
	else
		return (NULL);
}
