#include "main.h"

/**
 * more_numbers - print 10 times each digit
 * Return: 0
 */

void more_numbers(void)
{
	char i;
	char count;

	while (count <= 9)
	{
		while (i <= 14)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;

		}
	_putchar('\n');
	count++;
	i = 0;
	}
}
