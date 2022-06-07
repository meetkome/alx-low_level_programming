#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
