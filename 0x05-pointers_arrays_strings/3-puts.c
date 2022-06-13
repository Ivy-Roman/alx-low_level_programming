#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string to print
 * Return: str
 */

void _puts(char *str)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
