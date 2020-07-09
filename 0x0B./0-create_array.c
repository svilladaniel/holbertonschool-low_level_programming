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
	unsigned int i;

	a = malloc(sizeof(char) * size);
	if (a == NULL || a == 0)
	{
		return(NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		a[i] = c;
	}
	a[i] = '\0';
	return (a);
}
	
