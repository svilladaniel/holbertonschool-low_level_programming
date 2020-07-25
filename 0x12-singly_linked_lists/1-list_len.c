#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: a node
 * Return: lenght of the node
 */
size_t list_len(const list_t *h)
{
	size_t lenght;

	for (lenght = 0 ; h ; lenght++)
	{
		h = h->next;
	}
	return (lenght);
}
