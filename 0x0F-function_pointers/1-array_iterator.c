#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 * @array: array of elemnts
 * @size: size of the array
 * @action: ponter to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
