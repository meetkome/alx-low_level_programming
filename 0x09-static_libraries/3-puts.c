#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string followed by a new line
 * @str: to be printed
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{

		_putchar(str[c]);
	}
	_putchar('\n');
}
