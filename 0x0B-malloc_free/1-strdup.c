#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 * Return: The pointer to the new string (char)
 * NULL if str is empty
 */

char *_strdup(char *str)
{
	char *a;
	int b;
	int c, d;

	for(c = 0 ; str[c] != '\0' ; c++)
	{
		d = c;
	}
	a = malloc(sizeof(char) * d);
	if (str == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < d ; b++)
	{
		for (b = 0 ; str[b] != '\0' ; b++)
		{
			a[b] = str[b];
		}
	}
	a[b] = '\0';
	return (a);
	free(a);
}