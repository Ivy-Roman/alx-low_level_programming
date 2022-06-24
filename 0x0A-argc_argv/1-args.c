#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
 */

int main(int argc, char  *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
