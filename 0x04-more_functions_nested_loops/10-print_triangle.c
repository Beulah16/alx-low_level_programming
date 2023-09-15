#include "main.h"

/**
 * print_triangle - A function
 * @n - A parameter to be evaluated
 *
 * Return: void
 */
void print_triangle(int n)
{
	int i;
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			j = n-i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			k = 1;
			while (k <= 1)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
