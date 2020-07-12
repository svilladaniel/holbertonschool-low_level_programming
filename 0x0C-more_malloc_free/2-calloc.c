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
	char *b;
	void *c;
	unsigned int h;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	b = malloc(size * nmemb);
	if (b == NULL)
	{
		return (NULL);
	}
	for (h = 0 ; h < (nmemb * size) ; h++)
	{
		b[h] = 0;
	}
	c = b;
	return (c);
}
