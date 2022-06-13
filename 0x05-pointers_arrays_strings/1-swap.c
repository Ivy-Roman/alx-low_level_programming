#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first value to be swapped
 * @b: the second value to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
