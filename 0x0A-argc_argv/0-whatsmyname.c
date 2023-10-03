#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints its name
 * @argc: a parameter
 * @argv: a parameter
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}