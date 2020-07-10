#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
