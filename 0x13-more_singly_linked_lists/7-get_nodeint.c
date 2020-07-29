#include "lists.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (!head)
		return (NULL);
	for(a = 0 ; a != index ; a++)
	{
		head = head->next;
		if(!head)
			return(NULL);
	}
	return (head);
}