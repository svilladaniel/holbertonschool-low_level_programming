#include "holberton.h"

/**
 * times_table - prints the 9 times table
 * @void: this function doesnt recieve anything
 * Description: prints the 9 times table
 * Return: this function doesnt return anything
 */

void times_table(void)
{
	int f;
	int c;
	int d;

	for (f = 0 ; f <= 9 ; f++)
	{
		for (c = 0 ; c <= 9 ; c++)
		{
			d = f * c;
			if (d > 9)
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
				if (c != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (d <= 9)
			{
				if (c != 0)
				{
					_putchar(' ');
				}
				_putchar(d + '0');
				if (c != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
