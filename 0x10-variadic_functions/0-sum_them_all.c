#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: arguements
 *
 * Return: 0 always
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i;
	int sum = 0;

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);
	return (sum);
}

