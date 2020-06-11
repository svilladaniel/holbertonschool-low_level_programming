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
	long int l;
	long long int e;
	floa f;

	printf("Size of an int is: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an double is: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of an char is: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of an char is: %lu.\n", (unsigned long)sizeof(e));
	printf("Size of an char is: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
