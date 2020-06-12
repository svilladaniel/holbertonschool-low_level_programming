#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * @void: it doesnt mean anything
 * Description: prints the lowercase alphabet in reverse
 * Return:0
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	return (0);
}
