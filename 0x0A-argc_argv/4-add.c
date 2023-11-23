#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of CL parameters
 * @argv: array of CL parameters
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &ptr, 10);
		if (*ptr != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
