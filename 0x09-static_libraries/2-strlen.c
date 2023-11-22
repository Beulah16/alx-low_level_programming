#include "main.h"

/**
 * _strlen -A function
 * @s: a string to be evaluated
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
