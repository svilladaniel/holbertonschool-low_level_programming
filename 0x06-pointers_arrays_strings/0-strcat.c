#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0 ; dest[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; src[b] != '\0' ; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
