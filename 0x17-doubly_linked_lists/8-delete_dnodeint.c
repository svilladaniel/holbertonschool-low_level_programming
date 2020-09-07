#include "lists.h"
/**
 * delete_dnodeint_at_index - Short description, single line
 * @head: head of the linked list
 * @index: position to delete a node.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *subsecuente, *aux = *head;
	unsigned int b;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		(*head)->next->prev = NULL;
		(*head) = aux->next;
		free(aux);
		return (1);
	}
	for (b = 0 ; b < (index - 1) ; b++)
	{
		aux = aux->next;
		if (aux == NULL)
		{
			return (-1);
		}
	}
	if (aux->next == NULL)
	{
		aux->prev->next = NULL;
		free(aux);
		return (1);
	}
	subsecuente = aux->next;
	aux->next = subsecuente->next;
	free(subsecuente);
	return (1);
}
