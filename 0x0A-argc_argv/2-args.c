#include "holberton.h"
#include <stdio.h>

/**
 * main -  prints all arguments it receives
 * @argc: number of elements string
 * @argv: elements string
 * Return: 0 if everything is correct
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0 ; a < argc ; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
