#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: a pointer to char
 * @needle: a pointer to char
 * Return: a pointer to char
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0;

	while (needle[a] != '\0')
		a++;
	while (*haystack != '\0')
	{
		if ((_strncmp(haystack, needle, a) == 0))
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
/**
 * _strncmp - compare strings
 * @b: a pointer to char
 * @c: a pointer to char
 * @n: lenght of the string to compare
 * Return: int value
 */
int _strncmp(char *b, char *c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n && *b == *c && *b != '\0' && c != '\0' ; i++)
	{
		b++;
		c++;
	}
	return (i - n);
}
