#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @b: pointer to char
 * Return: a pointer to char
 */

char *cap_string(char *b)
{
	int a, c;
	char o[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		    '{', '}'};

	for (a = 0 ; b[a] != '\0' ; a++)
	{
		if (a == 0 && b[a] >= 'a' && b[a] <= 'z')
		{
			b[a] = b[a] - 32;
		}
		for (c = 0; o[c] != '\0' ; c++)
		{
			if (b[a + 1] >= 'a' && b[a + 1] <= 'z' && b[a] == o[c])
			{
				b[a + 1] = b[a + 1] - 32;
			}
		}
	}
	return (b);
}
