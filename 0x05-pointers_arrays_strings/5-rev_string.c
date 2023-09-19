#include "main.h"

/**
 * rev_string - A function
 * @s: a string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int size;
	char rev;
	int r;

	size = 0;
	i = 0;
	while (s[size] != '\0')
	{
		size++;
	}

	while (i < size--)
	{
		rev = s[i];
		s[i++] = s[size];
		s[size] = rev;
	}

}
