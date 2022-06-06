#include <stdio.h>

/**
 * main - print all possible combinations of two-digit numbers
 * Return: 0 always
 */

int main(void)
{
	int d;
	int c;
	int b;
	int a;

	for (d = '0'; d <= '9'; d++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (b = d; b <= '9'; b++)
			{
				for (a = c + 1; a <= '9'; a++)
				{
					putchar(d);
					putchar(c);
					putchar(' ');
					putchar(b);
					putchar(a);

					if (!((d == '9' && c == '8') && (b == '9' && a == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				a = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
