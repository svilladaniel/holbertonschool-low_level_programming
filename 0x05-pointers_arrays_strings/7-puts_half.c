#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: is a string
 */

void puts_half(char *str)
{
	int a, b;

	for (b = 0 ; str[b] != '\0' ; b++)
	{
	}
	if (b % 2 != 0)
	{
		for (a = (b - 1) / 2 ; a < b ; a++)
		{
			_putchar(str[a + 1]);
		}
	}
	else
	{
		for (a = b / 2 ; a < b ; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
