#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of CL parameters
 * @argv: array of CL parameters
 *
 * Return: 0 always
 */

int main(int argc, char* argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
