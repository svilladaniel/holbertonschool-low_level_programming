#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of a node.
 * @index: number of the node to get
 * Return: head the node to get
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (!head)
		return (NULL);
	for (a = 0 ; a != index ; a++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
