#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: a pointer to an int
 * @size: the size of an array
 */

void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0 ; b < (size * size) ; b += (size + 1))
	{
		c = c + a[b];
	}
	for (b = (size - 1) ; b < ((size * size) - 1) ; b += (size - 1))
	{
		d +=  a[b];
	}
	printf("%d, %d\n", c, d);
}
