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

	while (s[size] != '\0')
	{
		size++;
	}

	char rev[size + 1];
	rsize = 0;
	for (i = size - 1; i >= 0; i++)
	{
		rev[rsize] = s[i];
		rsize++;
	}
	rev[size] = '\0';
	*s = rev;

	return (0);
}
