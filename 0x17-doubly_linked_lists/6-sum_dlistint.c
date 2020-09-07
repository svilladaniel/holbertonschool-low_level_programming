#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) .
 * @head: head of a node.
 * Return: the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
