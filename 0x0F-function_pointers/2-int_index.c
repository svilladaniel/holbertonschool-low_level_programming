#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searchaes for an integer
 * @array: Array of numbers
 * @size: size of array
 * @cmp: function that searches for array
 * Return: i or -1 depends of requirements
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}