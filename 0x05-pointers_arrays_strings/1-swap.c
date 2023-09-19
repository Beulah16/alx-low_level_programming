#include "main.h"

/**
 * swap_int - A function
 * @a: a parameter to be evaluated
 * @b: a parameter to be evaluated
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int *tmp;

	tmp = b;
	*a = b;
	*b = tmp;
}
