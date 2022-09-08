#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: a value or null
 */

char *_strchr(char *s, char c)
{
	char *p = strchr(s, c);

	s = p;
	return (s);
}
