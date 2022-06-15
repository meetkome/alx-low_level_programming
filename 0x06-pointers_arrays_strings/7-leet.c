#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: encoded string
 * Return: address
 */

char *leet(char *s)char *leet(char *s)
{
	int n, p;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (n = 0; *(s + n); n++)
	{
	for (p = 0; p <= 9; p++)
	{
		if (a[p] == *(s + n))
			*(s + n) = b[p];
	}
	}
	return (s);
}
