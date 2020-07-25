#include "lists.h"
/**
 * _strlen- return the lenght of a node
 * @s: node
 * Return: Lenght of a string
 */
int _strlen(const char *s)
{
	int lenght;

	for (lenght = 0 ; *s ; lenght++)
	{
		s++;
	}
	return (lenght);
}
/**
 * add_node_end- adds a new node at the end of a list_t list
 * @head: The head of the node
 * @str: string
 * Return: head of a node, node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (last_node);
}
