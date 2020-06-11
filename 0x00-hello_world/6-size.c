/**
 * main - prints the size of various types on the computer
 * @void: no significa  nada
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char c;
	int i;
	long l;
	long long e;
	float f;

	printf("Size of int is: %lu. byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int is: %lu. byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long is: %lu. byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long is: %lu. byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of float is: %lu. byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
