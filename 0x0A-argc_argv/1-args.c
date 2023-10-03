#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the number of arguments passed into it
 * @argc: a parameter
 * @argv: a parameter
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);

	return (0);
}
