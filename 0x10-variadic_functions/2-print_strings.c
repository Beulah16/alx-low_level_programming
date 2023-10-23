#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i == (n - 1))
		{
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			else
			{
				printf("(nil)");
			}
		}
		if (separator != NULL)
		{
			if (str != NULL)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}
	va_end(args);
	printf("\n");
}
