#include "main.h"

/**
 * main - Entry point
 *
 */
void print_alphabet_x10(void)
{
	char n;
	char p;

	while (p < 10)
	{
		n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	p++;
	}
}
