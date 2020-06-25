#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: is a stream
 */

void puts2(char *str)
{
	int a, b;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; b <= a ; b = b + 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
