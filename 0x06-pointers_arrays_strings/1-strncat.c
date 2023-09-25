#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: a string
 * @src: another string
 * @n: bytes to be used from src
 *
 * Return: a pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
		dest[i + k] = '\0';
	}
	return (dest);
}
