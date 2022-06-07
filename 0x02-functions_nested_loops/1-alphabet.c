#include "main.h"

/**
 *
 * main - check the code.
 *
 *
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char n;
	for ( n = 'A'; n <= 'Z'; n++)
	{
		n = tolower(n);
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
