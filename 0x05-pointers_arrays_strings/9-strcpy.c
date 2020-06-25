#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to another pointer
 * @src: original pointer
 * @dest: destination pointer
 * Return: return a pointer char
 */

char *_strcpy(char *dest, char *src)
{
	int a, b;

	for (a = 0; src[a] != '\0' ; a++)
	{
	}
	for (b = 0; b < a ; b++)
	{
		dest[b] = src[b];
	}
	for (; b < a ; b++)
	{
		dest[b] = '\0';
	}
	return dest;
}
