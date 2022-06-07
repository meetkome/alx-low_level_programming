#include "main.h"

/**
 * _islower - check for lowercase character
 * @n: character to check
 *
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int n)
{

	if (n >= 'a' && n <= 'z')
		return (1);
	else
		return (0);
}
