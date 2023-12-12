#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: head of node
 * @str: string ponter
 *
 * Return: new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = temp;
	return (temp);
}
