#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * check - check if thers a char
 * @argc: number of elements string
 * @argv: elements string
 * Return: 1 if thers a character, 0 otherwise
 */
int check(int argc, char *argv[])
{
	unsigned int j;
	int i;

	for (i = 1 ; i <= argc ; i++)
	{
		for (j = 0 ; argv[i] != '\0' && j < strlen(argv[i]) ; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				return (1);
			}
		}
	}
	return (0);
}
/**
 * main - adds positive numbers
 * @argc: number of elements string
 * @argv: elements string
 * Return: 0 if everything is correct
 */
int main(int argc, char *argv[])
{
	int a;
	int sum = 0;

	if (check(argc, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 0 ; a < argc ; a++)
	{
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
