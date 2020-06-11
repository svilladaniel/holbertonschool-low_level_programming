/**
 * main - prints the size of various types on the computer
 * @void: no significa  nada
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	printf("Size of a char is: %zu byte(s)\n", sizeof(char));
	printf("Size of an int is: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int is: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float is: %zu byte(s)\n", sizeof(float));
	return (0);
}
