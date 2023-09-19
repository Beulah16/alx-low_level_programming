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
	int *swp1;
	int *swp2;

	*swp1 = a;
	*swp2 = b;
	*tmp = swp1;
	*swp1 = swp2;
	*swp2 = tmp;
}
