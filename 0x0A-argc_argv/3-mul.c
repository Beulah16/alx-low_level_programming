#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that the number of arguments passed into it
 * @argc: a parameter
 * @argv: a parameter
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	if (argc > 0)
	{
		mul = 1;
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
