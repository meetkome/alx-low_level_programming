#include "main.h"

/**
 * print_square - prints a square followed by a new line
 *
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;
		i = 0;
		while (i < size)
		{
			int j;
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			if (i < size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
