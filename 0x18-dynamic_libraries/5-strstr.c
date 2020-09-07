#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: a pointer to char
 * @needle: a pointer to char
 * Return: a pointer to char
 */
char *_strstr(char *haystack, char *needle)
{
        int j = 0, k = 0, i = 0;
        while (needle[i])
        {
                i++;
        }
                if (needle == NULL)
                {
                        return ("");
                }
                else if (i == 0)
                {
                        return (haystack);
                }
        while (haystack[k])
        {
                if (needle[j] == haystack[k])
                {
                        if (needle[j + 1] == '\0')
                        {
                                return (&haystack[k - j]);
                        }
                        j++;
                }
                else
                {
                        j = 0;
                }
                k++;
        }
        return (0);
}
