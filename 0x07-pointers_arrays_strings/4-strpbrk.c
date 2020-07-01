#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, a, b = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	a = i;
	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= a)
				{
					a = j;
					b = 1;
				}
			}
		}
	}
	if (b == 1)
	{
		return (&s[a]);
	}
	else
	{
		return ('\0');
	}
}
