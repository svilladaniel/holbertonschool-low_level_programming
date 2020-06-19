#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * @void: it doesnt return anything
 * Description: finds and prints the largest prime factor 
 * Return: doesnt return anything
 */

int main(void)
{
	long int a;
	long int b;
	long int c;

	a = 1231952;
	b = 2;
	while (a != 0)
	{
		if ((a % b) != 0)
		{
			b = b + 1;
		}
		else
		{
			c = a;
			a = a / b;
			if (a == 1)
			{
				printf("%ld", c);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}

	
	
