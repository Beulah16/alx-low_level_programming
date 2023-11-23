#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of CL parameters
 * @argv: array of CL parameters
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
