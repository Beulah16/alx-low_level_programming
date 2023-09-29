#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to be evaluated
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int length;

        if (*s == '\0')
        {
                return (0);
        }
        length = _strlen_recursion(s + 1);
        return (1 + length);
}
