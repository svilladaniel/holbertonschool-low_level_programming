#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 * Description: checks for alphabetic character
 * Return: a
 */
int _isalpha(int c)
{
	int a;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		a = 1;
	else
		a = 0;
	return (a);
}
