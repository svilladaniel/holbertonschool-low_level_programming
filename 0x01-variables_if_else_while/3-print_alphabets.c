#include <stdio.h>

/**
 * main - prints alphabet a...zA...Z
 * @void: doesnt mean anything
 * Description: prints alphabet a...zA...Z
 * Return: 0
 */
int main(void)
{
	char a;
	char b;

	for (a = 'a' ; a <= 'z' ; ++a)
	{
		putchar(a);
	}
	for (b = 'A' ; b <= 'Z' ; ++b)
	{
		putchar(b);
		putchar(\n);
	}
	return (0);
}
