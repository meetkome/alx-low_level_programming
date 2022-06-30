#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 * Return: funtion to s
 */

char *string_toupper(char *s)

{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] > 96 && s[len] < 123)
		{
			s[len] -= 32;
		}
	}
	return (s);
}
