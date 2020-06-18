#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: c is a character
 * Description: checks for a digit
 * Return: a is 1 if c is a digit and is 0 otherwise
 */

int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
