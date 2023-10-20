#include <stdlib.h>
#include "main.h"

/**
 * print_name - a function that prints a name.
 * @name: string parameter
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
