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
	char *rev;

	while (s[size] != '\0')
	{
		size++;
	}

	*rev = *(s + size - 1);
	r = 1;
	for (i = size - 2; i >= 0; i++)
	{
		*(rev + r) = s[i];
		r++;
	}
	*(rev + size) = '\0';
	*s = *rev;
}
