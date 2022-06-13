#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c);

/**
 * reset_to_98(int *n) - takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 */

void reset_to_98(int *n);

/**
 * _isdigit(int c) - checks for a digit (0 through 9).
 */

int _isdigit(int c);

/**
 * mul(int a, int b) - multiplies two integers.
 */

int mul(int a, int b);

/**
 * print_numbers(void) - prints the numbers, from 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers(void) -  prints the numbers, from 0 to 9
 */

void print_most_numbers(void);

/**
 * more_numbers(void); - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void);

/**
 * print_line(int n) - draws a straight line in the terminal
 */

void print_line(int n);

/**
 * print_diagonal(int n) - draws a diagonal line on the terminal
 */

void print_diagonal(int n);

/**
 * print_square(int size) -  prints a square, followed by a new line.
 */

void print_square(int size);

/**
 * print_triangle(int size) - prints a triangle, followed by a new line
 */

void print_triangle(int size);

/**
 * print_number(int n) -  prints an integer
 */

void print_number(int n);

#endif
