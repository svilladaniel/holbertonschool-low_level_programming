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
	int c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0 ; str[c] != '\0' ; c++)
	{
	}
	a = malloc(sizeof(char) * c + 1);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (b = 0; b < c ; b++)
	{
		a[b] = str[b];
	}
	a[b] = '\0';
	return (a);
}
