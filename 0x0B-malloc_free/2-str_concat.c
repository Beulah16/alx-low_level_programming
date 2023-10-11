#include "main.h"
#include <stdlib.h>

int count_str(char *s);

/**
* str_concat  - a function that concantenates two strings
* @s1: the destination string
* @s2: the string to be added to s1
* Return: returns a pointer to a newly allocated
* space in memory which contains the contents of s1, followed
* by the contents of s2
*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0, c = 0, c1 = 0, c2 = 0;
	char *newStr;

	c1 = count_str(s1);
	c2 = count_str(s2);

	c = c1 + c2 + 1;
	newStr = (char *) malloc(c * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		for (i = 0; i < c1; i++)
		{
			newStr[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for ( ; i < c; i++)
		{
			newStr[i] = s2[j];
			j++;
		}
	}
	newStr[c - 1] = '\0';
	return (newStr);
}

/**
* count_str - counts the number of characters in a string
* @s: the string to be counted
* Return: returns the number of characters an an int, returns 0 if s is NULL
*/
int count_str(char *s)
{
	int i;
	int c = 0;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			c++;
		}
	}
	return (c);
}
