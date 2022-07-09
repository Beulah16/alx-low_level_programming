#include "main.h"

/**
 * print_triangle - check
 * @size : integer type
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j <= size; j++)
			{
				if (j < (size - 1))
				{
					_putchar(' ');
					continue;
				}
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
