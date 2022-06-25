#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: value to be evaluated
 *
 * Return: size of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
