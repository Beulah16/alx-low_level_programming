#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main -  a program that a program that adds positive numbers
 * @argc: a parameter
 * @argv: a parameter
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc <= 1)
	{
		printf("0\n");

		return (0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (j < (int)strlen(argv[i]))
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j ++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);

		return (0);
	}
}
