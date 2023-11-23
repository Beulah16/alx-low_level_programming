#include "main.h"

/**
 * main - a program that prints its name
 * @argc: number of CL parameters
 * @argv: array of CL parameters
 *
 * Return: 0 always
 */

int main(int argc, char* argv[])
{
	int i;
	char *s = argv[0];

	i = 0;
	while(s[i] !='\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
