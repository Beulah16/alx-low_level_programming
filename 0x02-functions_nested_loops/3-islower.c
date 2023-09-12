#include "main.h"

/**
 * _islower - A function
 *
 * Return: 1 if true or 0 otherwise
 */
int _islower(int c)
{
	char b = c;

	if(b >= 97 && b <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
