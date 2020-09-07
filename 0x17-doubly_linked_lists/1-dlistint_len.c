#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: a node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
