#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head pointer.
 * @idx: position to add a node.
 * @n: data of the node.
 * Return: adress of node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux;
	unsigned int b;

	if (h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	if (h->next == NULL && idx == 1)
		return (add_dnodeint_end(h, n));
	if (h->next == NULL && idx > 1)
		return (NULL);
	while (idx != 0)
	{
		aux = *h;
		aux = aux->next;
		idx--;
		b = idx;
		if (aux->next == NULL && (idx - 1) == 0)
			return (add_dnodeint_end(h, n));
		if (aux->next == NULL && (b - 1) > 0)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	aux->prev->next = new_node;
	new_node->next = aux;
	new_node->prev = aux->prev;
	aux->prev = new_node;
	return (new_node);
}
