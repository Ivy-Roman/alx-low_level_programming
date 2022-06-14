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
 * swap_int(int *a, int *b) - swaps the values of two integers
 */

void swap_int(int *a, int *b);

/**
 * _strlen(char *s) -  returns the length of a string.
 */

int _strlen(char *s);

/**
 * _puts(char *str) -  prints a string, followed by a new line,
 * to standard output.
 */

void _puts(char *str);

/**
 * print_rev(char *s) - prints a string, in reverse
 */

void print_rev(char *s);

/**
 * rev_string(char *s) - reverses a string
 */

void rev_string(char *s);

/**
 * puts2(char *str) - prints every other character of a string
 */

void puts2(char *str);

/**
 * puts_half(char *str) - prints half of a string
 */

void puts_half(char *str);

/**
 * print_array(int *a, int n) - prints n elements of an array
 * of integers
 */

void print_array(int *a, int n);

/**
 * *_strcpy(char *dest, char *src) - copies the string
 * pointed to by src
 */

char *_strcpy(char *dest, char *src);

/**
 * _atoi(char *s) - convert a string to an integer
 */

int _atoi(char *s);

#endif
