#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head:double pointer to node head
 * Return: 0 if pointer exist, heads node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int n;

	if (!(*head))
		return (0);
	n = (*head)->n;
	a = *head;
	(*head) = (*head)->next;
	free(a);
	return (n);
}
