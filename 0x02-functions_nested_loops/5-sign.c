#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @c: check for character
 *
 * Return:for positive number, 1, for negative number, -1 or zero for anything else
 */

int print_sign(int c)
{

	if (c > 0)
	{
		_putchar(93);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(95);
		return (-1);
	}
	else
	{
		_putchar(98);
		return (0);
	}
}
