#include "main.h"

/**
 * rev_string - print a reverse string
 * @s: parameters for the function
 * Return: Always 0
 */
void rev_string(char *s)
{
	int p, r_s;
	char character;

	for (p = '\0'; s[p] != 0; p++)
	{
	}
	r_s = 0;
	for (p = p - 1; r_s < p; r_s++)
	{
		character = s[p];
		s[p] = s[r_s];
		s[r_s] = character;
		p--;
	}

