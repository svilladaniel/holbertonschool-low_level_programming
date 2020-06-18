#include "holberton.h"

/**
 *  print_numbers - prints numbers from 0 to 9
 * @void: it doesnt recieve anything
 * Description: prints the numbers from 0 to 9
 * Return: doesnt return anything
 */

void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
