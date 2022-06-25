#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s:memory area pointed to
 * @b: fills the memory
 * @n: bytes to be filled
 *
 * Return: pointer to fill the @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	unsigned int j;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
