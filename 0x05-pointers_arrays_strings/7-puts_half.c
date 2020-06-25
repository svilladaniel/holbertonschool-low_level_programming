#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: is a string
 */

void puts_half(char *str)
{
	int a, b, n;

	for (b = 0 ; str[b] != '\0' ; b++)
	{
	}
	if (b % 2 != 0)
	{
		for (n = (b - 1) / 2 ; n < b - 1 ; n++)
		{
			_putchar(str[n + 1]);
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
