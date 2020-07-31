#include "holberton.h"

/**
 *  flip_bits - returns the number of bits changed
 * @m: a pointer to decimal
 * @n: a pointer to decimal
 * Return: number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0, a;

	m = m ^ n;
	for(a = (sizeof(m) * 8) ; a > 0 ; a--)
		if (((m >> a) & 1) == 1)
			counter++;
	return (counter);
}