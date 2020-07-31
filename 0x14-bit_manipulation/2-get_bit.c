#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given dec
 * @index: given index
 * Return: the value of a bit at a given index or -1 if fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > ((sizeof(n) * 8)))
		return (-1);
	a = ((n >> index) & 1);
	return (a);
}
