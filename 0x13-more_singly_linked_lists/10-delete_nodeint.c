#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer.
 * @index: position to add a node.
 * Return: 1 if succes, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *subsecuente, *aux;
	unsigned int b;

	/*if (head == NULL)
		return (-1);*/
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	if (head == NULL)
		return (-1);
	for (b = 0 ; b < (index - 1) ; b++)
	{
		aux = aux->next;
		if (aux == NULL)
		{
			return (-1);
		}
	}
	subsecuente = aux->next;
	aux->next = subsecuente->next;
	free(subsecuente);
	return (1);
}
