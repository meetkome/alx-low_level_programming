#include "main.h"

/**
 * puts2 - Prints every character of the string
 * starting with the first character
 * @str: parameter for the function
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int a;
	char p;

	for (a = 0; str[a] != 0; a++)
	{
		if (a % 2 == 0)
		{
			p = str[a];
			_putchar(p);
		}
	}
	_putchar('\n');
}
