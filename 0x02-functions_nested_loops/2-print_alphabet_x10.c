#include "main.h"

/**
 * _print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * @n: character to check
 * @p: check also for character
 * Return: The alphabet, in lowercase.
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
