#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0 ; dest[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; b < n && src[b] != '\0' ; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
