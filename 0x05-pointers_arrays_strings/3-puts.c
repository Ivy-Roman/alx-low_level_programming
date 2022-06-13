#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string to print
 * Return: str
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
