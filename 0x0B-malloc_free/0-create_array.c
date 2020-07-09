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

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc((size - 1) * sizeof(char));
	if (a == NULL || a == 0)
	{
		return(NULL);
	}
	for(b = 0 ; b < size ; b++)
	{
		a[b] = c;
	}
	a[b] = '\0';
	return(a);
}
