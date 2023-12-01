#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print-numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: arguements
 *
 * Return: 0 always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	while ( i < n)
	{
		if ( i == (n - 1))
		{
			printf("%d", va_arg(args, int));
			break;
		}
		printf("%d", va-args(args, int));
		if (separator != NULL)
			printf("%s ", separator);
		i++;
	}
	va_end(args);
	_putchar('\n');
}

