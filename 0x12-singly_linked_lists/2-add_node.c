#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: head of node
 * @str: string ponter
 *
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
