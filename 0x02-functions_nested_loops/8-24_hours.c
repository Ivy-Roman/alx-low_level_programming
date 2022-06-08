#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: always 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	if (hours < 24)
	{
		if (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hours++;
	}
}
