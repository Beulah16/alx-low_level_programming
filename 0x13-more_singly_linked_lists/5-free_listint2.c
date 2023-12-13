#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: head node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
	}
	while (temp->next != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	*head = temp;
	free(*head);
}
