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
 * add_node- adds a new node at the beginning of a list_t list
 * @head: The head of the node
 * @str: string
 * Return: head of a node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
