#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 1;

	while (a < 10)
	{
		while (b < 9)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					if (a != 0 || b != 1 || c != 0 || d != 0)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
					}
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}
	a = 0;
	putchar('\n');
	return (0);
}
