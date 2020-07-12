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
