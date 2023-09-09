#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
