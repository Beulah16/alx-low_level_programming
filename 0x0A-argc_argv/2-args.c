#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints all arguments it receives
 * @argc: a parameter
 * @argv: a parameter
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
