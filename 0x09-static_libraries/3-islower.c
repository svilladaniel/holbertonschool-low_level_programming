#include "holberton.h"

/**
 * _islower - check if a letter si lowercase or uppercase
 * @c: 1 if is lowercase 0 if is uppercase
 * Description: check if a letter si lowercase or uppercase
 * Return: c
 */
int _islower(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
