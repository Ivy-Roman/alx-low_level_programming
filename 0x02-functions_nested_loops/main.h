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
 * print_alphabet - print lowercase alphabet followed by a new line
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);

/**
 * _islower(int c) - checks for lowercase character
 */

int _islower(int c);

/**
 * _isalpha(int c) - checks for alphabetic character
 */

int _isalpha(int c);

/**
 * print_sign(int n) - prints the sign of a number
 */

int print_sign(int n);
#endif
