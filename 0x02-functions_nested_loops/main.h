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

/**
 * _abs(int) - computes the absolute value of an integer.
 */

int _abs(int);

/**
 * print_last_digit(int) - prints the last digit of a number.
 */

int print_last_digit(int);

/**
 * jack_bauer(void) - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void);

/**
 * times_table(void) - prints the 9 times table, starting with 0
 */

void times_table(void);

/**
 * add(int, int) - adds two integers and returns the result
 */

int add(int, int);

/**
 * print_to_98(int n) - prints all natural numbers from n to 98
 */

void print_to_98(int n);

/**
 * print_times_table(int n) - prints the n times table
 */

void print_times_table(int n);

#endif
