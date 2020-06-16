#include "holberton.h"

/**
 * print_alphabet_x10 - prints a to z 10 times
 * @void: doesnt return anything
 * Description: prints a to z 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	char c;

	for (a = 0 ; a < 10 ; a++)
	{
		for (c = 'a' ; c <= 'z' ; ++c)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
