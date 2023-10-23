#include <stdarg.h>
#include <stdio.h>

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
		printf("%d", va_arg(argp, int));
		if (separator != NULL)
			printf("%s", separator);
	}

	va_end(argp);
	prinf("\n");
}
