#include "main.h"

/**
 * _puts - A function
 * @str - a string to be evaluated
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
