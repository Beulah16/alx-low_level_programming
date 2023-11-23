#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of CL parameters
 * @argv: array of CL parameters
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
