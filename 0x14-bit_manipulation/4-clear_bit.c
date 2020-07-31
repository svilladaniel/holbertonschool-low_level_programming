#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: a pointer to decimal
 * @index: position to change
 * Return: 1 if worked, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n & (-2 << index);
	return (1);
}
