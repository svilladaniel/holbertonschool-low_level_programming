#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * @void: doesnt recieve anything
 * Description: prints the numbers from 1 to 100 (Fizz, Buzz, FizzBuzz)
 * Return: Description of the returned value
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			if (a != 100)
			{
				printf(" ");
			}
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
