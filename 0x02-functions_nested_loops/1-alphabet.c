#include "holberton.h"

/**
 * print_alphabet - prints a to z
 * @void: Doest mean anything
 * Description: prints a to z
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; ++c)
		_putchar(c);
	_putchar('\n');
}
