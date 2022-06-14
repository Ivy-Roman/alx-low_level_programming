#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str - the string to print
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = 0; str[i] != '\0' && i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
