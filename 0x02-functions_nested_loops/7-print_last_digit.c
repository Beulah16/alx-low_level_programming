#include "main.h"

/**
 * print_last_digit - A function
 * @n: Number to be evaluated
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return lastDigit;
}
