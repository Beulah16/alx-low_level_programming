#include "main.h"

/**
 * print_square - A function
 * @size: parameter to be evaluated
 *
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (n > 0)
	{
		i =0;
		while (i < size)
		{
			j = 0;
			while (j < size)
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
