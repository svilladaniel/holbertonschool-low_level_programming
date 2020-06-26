#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: pointer to string
 * @src: pointer to string
 * Return: destination pointer
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0 ; dest[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; src[b] != '\0' ; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
