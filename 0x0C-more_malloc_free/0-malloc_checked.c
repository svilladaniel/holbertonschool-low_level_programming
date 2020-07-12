#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked  - allocates memory
 * @b: the lenght of the alocated memory
 * Return: a pointer ti the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
