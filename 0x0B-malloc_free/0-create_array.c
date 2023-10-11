#include "main.h"
#include <stdlib.h>

/**
* create_array - a function that creates and array of characters and
* initializes it with a specific char
* @size: the size of the array
* @c: a parameter
*
* Return: returns a pointer to the array,
* returns NULL if size = 0 or if malloc fails
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
