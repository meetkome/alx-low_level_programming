#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: for the char
 * @accept: parameter to be accepted
 * Return: A value of pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	char *c = s;

	c = strpbrk(s, accept);
	s = c;

	return (s);
}
