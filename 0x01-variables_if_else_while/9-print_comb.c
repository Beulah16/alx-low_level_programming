#include <stdio.h>

/**
 * main - Entry point
 * Description: print all combinations of single digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
