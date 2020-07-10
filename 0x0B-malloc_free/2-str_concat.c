#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1 : a string
 * @s2 : a string
 * Return: a pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
	}
	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		a[k] = *s1;
		s1++;
		k++;
	}
	while (*s2 != '\0')
	{
		a[k] = *s2;
		s2++;
		k++;
	}
	a[k] = '\0';
	return (a);
}
