#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: number of characters
 * @c: characters
 * Return: a pointer to the array, or NULL if it fails
 * a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc((size - 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return(NULL);
	}
	for (b = 0 ; b < size ; b++)
	{
		a[b] = c;
	}
	a[b] = '\0';
	return (a);
	free(a);
}
