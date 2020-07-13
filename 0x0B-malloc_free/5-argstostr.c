#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates given strings
 * @ac: number of arrays
 * @av: arrays
 * Return: a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int b, i, j, l;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	l = b = 0;
	for (i = 0 ; av[i] != '\0' ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
		}
		l = l + j;
	}
	a = malloc(sizeof(char) * (l + ac) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++, b++)
		{
			a[b] = av[i][j];
		}
		a[b] = '\n';
		b++;
	}
	a[b] = '\0';
	return (a);
}
