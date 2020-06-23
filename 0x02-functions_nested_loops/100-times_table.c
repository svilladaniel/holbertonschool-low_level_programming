#include "holberton.h"
/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/

void print_times_table(int n)
{
	int i, j, a;

	if ((n >= 0) && (n < 16))
	{
			for (i = 0 ; i <= n ; i++)
			{
				for (j = 0 ; j <= n ; j++)
				{
					a = i * j;
					if (a >= 100)
					{
						if (j != 0)
						{
							_putchar(' ');
						}
						_putchar((a / 100) + '0');
						_putchar((a / 10) % 10 + '0');
						_putchar((a % 10) + '0');
					}
					else if ((a >= 10) && (a < 100))
					{
						if (j != 0)
						{
							_putchar(' ');
							_putchar(' ');
						}
						_putchar((a / 10) + '0');
						_putchar((a % 10) + '0');
					}
					else if (a < 10)
					{
						if (j != 0)
						{
							_putchar(' ');
							_putchar(' ');
							_putchar(' ');
						}
						_putchar(a + '0');
					}
					if (j != n)
					{
						_putchar(',');
					}
				}
				_putchar('\n');
			}
		}
}
