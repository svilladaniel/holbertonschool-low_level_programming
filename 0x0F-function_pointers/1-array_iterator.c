#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given
 * @array: is an array of integer
 * @size: is the size of the array
 * @action: is a function
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;
	
	for(i = 0; i < size ; i++)
	{
		(*action)(array[i]);
	}
}
