#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * @n: The character
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
