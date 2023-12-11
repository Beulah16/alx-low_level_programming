#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: head node
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			temp = temp->next;
		}
		printf("[%u] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
