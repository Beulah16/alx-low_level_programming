#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;

	va_start(argp, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(args, int));
			break;
		}
		if (separator != NULL)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		else
		{
			printf("%d", va_arg(args, int));
		}
	}

	va_end(argp);
	printf("\n");
}
