#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: is a stream
 */

void puts2(char *str)
{
	int a;

	for (a = 1 ; str[a] != '\0' ; a = a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
