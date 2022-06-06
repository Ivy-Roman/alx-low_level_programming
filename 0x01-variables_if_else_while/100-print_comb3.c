#include <stdio.h>

/**
 * main - print all possible combinations of two digits between 01 and 10
 * Return: 0 always
 */

int main(void)
{
	int a;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = (b + 1); a <= '9'; a++)
		{
			putchar(b);
			putchar(a);

			if (b != '8' || a != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
