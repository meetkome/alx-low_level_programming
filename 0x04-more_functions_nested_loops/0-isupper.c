#include "main.h"
#include <stdio.h>

/**
 * main - check for uppercase
 * @a: variable
 * Return: 0
 */

int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
