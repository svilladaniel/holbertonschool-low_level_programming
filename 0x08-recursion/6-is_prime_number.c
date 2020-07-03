#include "holberton.h"

/**
 * is_prime_number - return 1 if n is prime, 0 otherwhise
 * @n: a number, integer
 * Return: 1 if n prime, 0 otherwhise
 */

int is_prime_number(int n)
{
	int i = 2;

	return (_comp_pr(n, i));
}
/**
 * _comp_pr - return 1 if n is prime, 0 otherwhise
 * @n: a number, integer
 * @i: an integer
 * Return: 1 if n prime, 0 otherwhise
 */
int _comp_pr(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i < n && n % i == 0)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	return (_comp_pr(n, i + 1));
}
