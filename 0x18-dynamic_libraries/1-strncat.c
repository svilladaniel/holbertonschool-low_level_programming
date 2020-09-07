#include "holberton.h"

/**
 * _strncat - Concatenate two strings
 * @dest: pointer so string
 * @src: pointer to string
 * @n: lenght
 * Return: the pointer to the concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0 ; dest[a] != '\0' ; a++)
	{
	}
	for (b = 0 ; b < n && src[b] != '\0' ; a++,  b++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
