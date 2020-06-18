#include "holberton.h"

/**
 * more_numbers - Return 0 to 14, 10 times
 * @void: it doesnt recieve anything
 * Description: print 0 to 14, 10 times
 * Return: doesnt return anything
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
