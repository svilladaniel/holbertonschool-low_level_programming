#include "holberton.h"

/**
 * _abs - computes the absulote value of input
 * @n: is a number + or -
 * Description: computes the absulote value of input
 * Return: a is the abs of the input
 */

int _abs(int n)
{
	int a;

	if (n >= 0)
	{
		a = n;
	}
	else if (n < 0)
	{
		a = n * -1;
	}
	return (a);
}
