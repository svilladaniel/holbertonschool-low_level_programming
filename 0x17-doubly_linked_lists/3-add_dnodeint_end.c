#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list_t list
 * @head: The head of the node
 * @n: node element
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *a;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	if (!(*head))
	{
		last_node->next = NULL;
		last_node->prev = NULL;
		*head =	last_node;
	}
	else
	{
		a = *head;
		for (; a->next != NULL; a = a->next)
		{
		}
		last_node->next = NULL;
		last_node->prev = a;
		(a)->next = last_node;
	}
	return (last_node);
}
