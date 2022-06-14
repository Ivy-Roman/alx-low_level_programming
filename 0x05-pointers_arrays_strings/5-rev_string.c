#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	char character;

	for (j = '\0'; s[j] != 0; j++)
	{
	}


	i = 0;
	for (j = (j - 1); i < j; i++)
	{
		character = s[j];
		s[j] = s[i];
		s[i] = character;
		j--;
	}
}
