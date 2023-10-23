#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of it's parameters
 * @n: number of parameters
 *
 * Return: sum of parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start (argp, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argp int);
	}

	va_end (argp);

	return (sum);
}
