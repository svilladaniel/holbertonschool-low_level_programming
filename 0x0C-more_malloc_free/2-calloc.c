#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: number of elemnts
 * @size: size of the element
 * Return: a pointer to de allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int h;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	for (h = 0 ; h < nmemb ; h++)
	{
		a[h] = 0;
	}
	return (a);
}
