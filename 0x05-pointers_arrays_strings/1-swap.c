#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: an integer
 * @b: an integer
 * Description: swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
