#include "main.h"

/**
 * _isalpha - A function
 * @c: The character to be evaluated
 *
 * Return: 1 if true or 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
