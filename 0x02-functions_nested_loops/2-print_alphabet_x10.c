#include "holberton.h"

/**
 * main - prints a to z
 * @void: Doest mean anything
 * Description: prints a to z
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char c;

	while (a < 10)
	{
		for (c = 'a' ; c <= 'z' ; ++c)
		{
			_putchar(c);
		}
		a++;
	}
	_putchar('\n');
}
