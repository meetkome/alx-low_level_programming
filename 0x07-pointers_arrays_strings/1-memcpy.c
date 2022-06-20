#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory dest
 * @src: memory source
 * @n: The number of bytes
 *
 * Return: to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]
	}
	return (dest);
}
