#include "main.h"

/**
 * print_numbers - A function
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
