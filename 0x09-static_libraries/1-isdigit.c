#include "main.h"

/**
 * _isdigit - A function
 * @c: parameter to be evaluated
 *
 * Return: 1 if true or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
