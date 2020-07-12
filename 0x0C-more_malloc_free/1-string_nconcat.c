#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: a pointer to string
 * @s2: a pointer to string
 * @n: a number of positions to show s2
 * Return: a pointer to the new location in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h, i, j, k;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
	}
	if (n >= (j + 1))
		a = malloc((sizeof(char) * (i + (j + 1))));
	else
		a = malloc((sizeof(char) * (i + n + 1)));
	if (a == NULL)
		return (NULL);
	for (h = 0; s1[h] ; h++)
		a[h] = s1[h];
	for (k = 0 ; s2[k] && k < n ; h++)
		a[h] = s2[k];
		k++;
	a[h] = '\0';
	return (a);
}
