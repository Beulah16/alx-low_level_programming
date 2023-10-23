#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of parameters
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%s", va_arg(args, char *));
			break;
		}
		if (separator != NULL)
		{
			if (va_arg(args, char *) != NULL)
			{
				printf("%s%s", va_arg(args, char *), separator);
			}
			else
			{
				printf("(nil)%s", separator);
			}
		}
		else
		{
			if (va_arg(args, char *) != NULL)
			{
				printf("%s", va_arg(args, char *));
			}
			else
			{
				printf("(nil)");
			}
		}
	}

	va_end(args);
	printf("\n");
}
