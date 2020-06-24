#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: stream
 * Description: prints a string, in reverse
 */

void print_rev(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
	}
	for (a = a - 1 ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
