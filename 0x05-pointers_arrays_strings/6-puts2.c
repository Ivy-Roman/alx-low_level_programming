#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str - the string to print
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 2);
	}
	_putchar('\n');
}
