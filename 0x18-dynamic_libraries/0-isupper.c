#include "holberton.h"

/**
 * _isupper - check if a character is uppercase
 * @c: c is a character
 * Description: check if character is uppercase
 * Return: a is 1 if is uppercase or 0 if not
 */

int _isupper(int c)
{
	int a;

	if (c >= 'A' && c <= 'Z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
