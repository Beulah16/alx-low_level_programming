#include "main.h"

/**
 * print_rev - A funtion
 * @s: a string to be evaluated
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int size;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
