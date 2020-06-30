#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer to char variable dest
 * @src: a pointer to char variable src
 * @n: the lenght of the memory
 * Return: a pointer to char dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
