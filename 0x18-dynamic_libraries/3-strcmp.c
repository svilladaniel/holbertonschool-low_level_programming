#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
