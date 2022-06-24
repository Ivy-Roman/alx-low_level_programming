#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
