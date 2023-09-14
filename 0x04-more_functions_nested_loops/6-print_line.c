#include "main.h"

/**
 * print_line - A funtion
 * @n: parameter to be evaluated
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\\');
		_putchar('n');
	}
	else
	{
		_putchar('\\');
		_putchar('n');
	}
}
