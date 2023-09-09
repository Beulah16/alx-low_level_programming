#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return:0 Always
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
