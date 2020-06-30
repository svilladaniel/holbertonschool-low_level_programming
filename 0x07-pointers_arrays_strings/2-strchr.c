#include "holberton.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: a pointer to char
 * @c: specific character
 * Return: a pointer to firts occurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (NULL);
}
