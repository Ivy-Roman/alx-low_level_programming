#include "main.h"

/**
 * int _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 * Returns: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
