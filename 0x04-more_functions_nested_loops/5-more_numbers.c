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
			_putchar(i);
		}
	}
	_putchar('\n');
}
