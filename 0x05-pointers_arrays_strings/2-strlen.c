#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: value to be evaluated
 * Return: size of string
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
