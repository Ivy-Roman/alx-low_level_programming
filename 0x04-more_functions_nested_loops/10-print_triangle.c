#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= (size - a); b++)
			_putchar(' ');

		for (c = 1; c <= a; c++)
			_putchar('#');

		_putchar('\n');
	}
}
