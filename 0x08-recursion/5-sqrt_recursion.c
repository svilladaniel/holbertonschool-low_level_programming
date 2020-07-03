#include "holberton.h"

/**
 * _sqrt_recursion - return the scuare root of a number
 * @n: the base
 * Return: square root of a number or -1
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	return (find_sg(n, i));
}
/**
 * find_sg - Short description, single line
 * @n: is an integer
 * @i: the base
 * Return: square root of a number or -1
 */
int find_sg(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (find_sg(n, i + 1));
	}
}
