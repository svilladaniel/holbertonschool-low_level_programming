#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: number of elements string
 * @argv: elements string
 * Return: 0 if everything is correct
 */

int main(int argc, char *argv[])
{
	int a;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 0 ; a < argc ; a++)
		{
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
