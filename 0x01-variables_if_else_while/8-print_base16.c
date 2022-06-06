#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 always
 */

int main(void)
{
	int n = '0';
	int c = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
