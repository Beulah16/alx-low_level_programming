#include "main.h"

/**
 * jack_bauer - A function
 *
 * Return: void
 */
void jack_bauer(void)
{
	int min;
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr <= 9)
			{
				_putchar('0');
			}
			_putchar(hr);
			_putchar(':');
			if (min <= 9)
			{
				_putchar('0');
			}
			_putchar(min);
		}
	}
}
