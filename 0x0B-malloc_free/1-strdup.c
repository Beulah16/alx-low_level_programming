#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that copies a string
* @str: the string to  be copied
*
* Return: returns a pointer to a newly allocated space in memonry
* which contains a copy of the given string
*/
char *_strdup(char *str)
{
	int i;
	int c;
	char *newStr;

	i = 0;
	c = 0;
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		c++;
		i++;
	}

	newStr = (char *) malloc(sizeof(char) * c);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
}
