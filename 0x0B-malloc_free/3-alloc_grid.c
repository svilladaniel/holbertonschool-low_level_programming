#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid -  return a pointer to 2d int array
 * @width: columns
 * @height: lines
 * Return: a pointer to 2d int array
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		a[i] = malloc((width + 1) * sizeof(int));
		if (a[i] == NULL)
		{
			for (; i >= 0 ; i--)
			{
				free(a[i]);
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
