#include "holberton.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @b: pointer to char
 * Return: a pointer to char
 */

char *string_toupper(char *b)
{
	int a;

	for (a = 0 ; b[a] != '\0' ; a++)
	{
		if (b[a] >= 'a' && b[a] <= 'z')
		{
			b[a] = b[a] - 32;
		}
	}
	return (b);
}
