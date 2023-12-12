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
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
