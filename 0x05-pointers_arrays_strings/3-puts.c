#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @sre: to be printed
 */

void _puts(char *str)
{
	while (*str)

		_putchar(*str++);
	_putchar('\n');
}
