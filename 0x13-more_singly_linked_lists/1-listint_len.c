#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: a node
 * Return: lenght of the node
 */
size_t listint_len(const listint_t *h)
{
	size_t lenght;

	for (lenght = 0 ; h ; lenght++)
	{
		h = h->next;
	}
	return (lenght);
}
