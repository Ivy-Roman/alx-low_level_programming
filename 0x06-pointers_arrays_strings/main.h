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
 * *_strcat(char *dest, char *src) - concatenates two strings.
 */

char *_strcat(char *dest, char *src);

/**
 * *_strncat(char *dest, char *src, int n) - concatenates two strings
 */

char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy(char *dest, char *src, int n) - copies a string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *);

/**
 * string_toupper - capitalize first letter of all words
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s);

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s);

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s);

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);


/**
 * *infinite_add(char *n1, char *n2, char *r, int size_r) - adds 2 numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);
#endif
