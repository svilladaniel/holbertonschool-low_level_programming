#include "lists.h"

/**
 * print_listint - Prints all elements of a list_t list.
 * @h: head pointer.
 * Return: Numbers of nodes.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux;
	unsigned int b;

	if(head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	aux = *head;
	if (idx == 0)
	{
		new_node->next = aux;
		*head = new_node;
		return (new_node);
	}
	for (b = 0 ; b < (idx - 1) ; b++)
	{
		aux = aux->next;
		if (aux == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return(new_node);
}