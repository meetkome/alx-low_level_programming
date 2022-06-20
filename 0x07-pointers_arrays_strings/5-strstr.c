#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring.
 * @haystacks: The string to be scanned
 * @needle: string to be searched in haystacks
 *
 * Return: A value or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *s = haystack;

	haystack = strstr(s, needle);

	return (haystack);
}
