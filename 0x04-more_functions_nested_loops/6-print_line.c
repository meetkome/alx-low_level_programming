#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: variable to hold numbers
 * Return: void
 */

void print_line(int n)
{
	int i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
