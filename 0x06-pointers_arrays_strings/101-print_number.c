#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to printed
 * Return: 0
 */

void print_number(int n)
{
	int count, y, j;
	
	y = 1000000000;
	if (n == 0)
		_putchar('0');
	else if (n > 0)
		n *= -1;
	else
		_putchar('-');
	for (count = 0; count < 10; count++, y /= 10)
	{
		if (n / y == 0)
			continue;
		else
		{
			j = (-(n / y) % 10);
			if (j < 0)
				j *= -1;
			_putchar(j + '0');
		}
	}
}
