#include "main.h"

/**
 * print_diagonal - A function
 * @n: parameter to be evaluated
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('\\');
			_putchar('\n');
			j = 1;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
