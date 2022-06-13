#include "main.h"

/**
 * print_rev -function that prints a string in reverse
 * @s: parameter for the function
 * Return: Always 0
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
	{
	}
	for (x = x - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
