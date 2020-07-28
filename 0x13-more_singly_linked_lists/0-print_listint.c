#include "lists.h"

/**
 * print_listint - Prints all elements of a list_t list.
 * @h: head pointer.
 * Return: Numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if ((*h).n == '\0')
			printf("0\n");
		else
			printf("%i\n", (*h).n);
		c++;
		h = h->next;
	}
	return (c);
}
