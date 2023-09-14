#include "main.h"

/**
 * print_line - A funtion
 * @n: parameter to be evaluated
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\');
		_putchar('n');
	}
	else
	{
		_putchar('\');
		_putchar('n');
	}
}
