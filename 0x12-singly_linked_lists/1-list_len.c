#include "lists.h"

/**
 * list_len - a function that returns the number of elements 
 * in a linked list_t list.
 * @h: head node
 *
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
