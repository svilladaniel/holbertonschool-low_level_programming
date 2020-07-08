#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints its name, followed by a new line
 * @argc: number of elements string
 * @argv: elements string
 * Return: 0 if everything is correct
 */

int main(int argc, char *argv[])
{
	int a;
	int mult;

	for (a = 1 ; a < argc ; a++)
	{
		if ((a + 1) < argc)
		{
			if (a != '\0' && (a + 1) != '\0')
			{
				mult = atoi(argv[a]) * atoi(argv[a + 1]);
				printf("%d\n", mult);
			}
		}
	}
	if (argc == 1)
	{
		printf("Error\n");
	}
	return (0);
}
