#include "main.h"

/**
 * print_line - function that prints underscore n times
 *
 * @n: variable to hold numbers
 * Return: void
 */

void print_line(int n)
{
	int i;
       
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
