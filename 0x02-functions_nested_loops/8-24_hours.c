#include "holberton.h"

/**
 * jack_bauer - Short description, single line
 * @void: no parameters
 * Description: prints hours and minutes of the day
 * Return: anything
 */

void jack_bauer(void)
{
	int h;
	int m;
	int k;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			k = h / 10;
			_putchar('0' + k);
			k = h % 10;
			_putchar('0' + k);
			_putchar(':');
			k = m / 10;
			_putchar('0' + k);
			k = m % 10;
			_putchar('0' + k);
			_putchar('\n');
		}
	}
}
