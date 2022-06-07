#include "main.h"

/**
 * _isalpha - Checks if character is alphabetic.
 *
 * Return: 1 if character is letter , lowercase or uppercase, 0 otherwise
 */
int _isalpha(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
		return (1);
	else
		return (0);
}
