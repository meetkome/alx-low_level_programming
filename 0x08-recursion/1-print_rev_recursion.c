#include "main.h"

/**
 * _print_rev_recursion - reverse
 * @s: points to string parameters
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
