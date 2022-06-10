#include "main.h"

/**
 * more_numbers - print 10 times each digit
 * Return: 0
 */

void more_numbers(void)
{
	char i;
	char count;

	for (count = 0; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
