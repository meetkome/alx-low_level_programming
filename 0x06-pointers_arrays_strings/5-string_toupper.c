#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letters of a string to uppercase
 * @s: string to change
 * Return: funtion to address
 */

char *string_toupper(char *s)

{
	int len;
	for (len = 0; c[len] != '\0'; len++)
	{
		if (c[len] > 96 && c[len] < 123)
		{
			c[len] -= 32;
	}
	}
	return (s);
}
