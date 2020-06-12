#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asign a random value to n and print pos, zero, neg
 * @void: no retorna nada
(* a blank line
* Description: asign a random value to n and print pos, zero, neg
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%ul is negative\n", n);
			}
	else
	{
		if (n == 0)
		{
			printf("%ul is zero\n", n);
		}
		else
		{
			printf("%ul is positive\n", n);
		}
	}
	return (0);
}
