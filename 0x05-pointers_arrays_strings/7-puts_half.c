#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/

void puts_half(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
	}
	if ( a % 2 != 0)
	{
		for (a = (a - 1) / 2 ; str[a] != '\0' ; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		for (a = a / 2 ; str[a] != '\0' ; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
