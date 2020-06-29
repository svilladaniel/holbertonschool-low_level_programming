#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @b: pointer to char
 * Return: a pointer to char
 */

char *leet(char *b)
{
	int a, i;
	char o[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char u[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (a = 0 ; b[a] != '\0' ; a++)
	{
		for (i = 0 ; i < 11 ; i++)
		{
			if (b[a] == o[i])
			{
				b[a] = u[i];
			}
		}
	}
	return (b);
}
