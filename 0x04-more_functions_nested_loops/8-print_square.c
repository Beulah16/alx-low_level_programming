#include "main.h"

/**
 * print_square - A function
 * @n: parameter to be evaluated
 *
 * Return: void
 */
void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		i =0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				_putchar('#');
				j++;
			}
			_putchar(' ');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
