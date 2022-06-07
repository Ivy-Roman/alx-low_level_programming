#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times followed by new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n')
	}
}
