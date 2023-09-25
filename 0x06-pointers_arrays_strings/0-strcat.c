#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: a string
 * @src: another string
 *
 * Return: a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l;
	int k;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	l = 0;
	while (*(src + l) != '\0')
	{
		l++;
	}
	l = l + i;
	k = 0;
	for (; i <= l; i++)
	{
		dest[i] = src[k];
		k++;
	}
	return (dest);
}
