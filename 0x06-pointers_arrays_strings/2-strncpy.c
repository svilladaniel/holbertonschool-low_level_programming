
 #include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination pointer
 * @src: pointer to the string
 * @n: lenght of the string
 * Return: char destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0 ; a < n && src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
