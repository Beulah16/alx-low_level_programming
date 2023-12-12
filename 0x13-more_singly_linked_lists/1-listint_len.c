#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a list
 * @h: head node of the list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t num;

	temp = h;
	num = 0;
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}

