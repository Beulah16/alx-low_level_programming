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
	f(name);
}
