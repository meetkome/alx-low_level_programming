#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by dest
 * @dest: pointer void
 * @src: pointer source
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int y, z = 0;

	while (src[z])
		z++;

	for (y = 0; y <= z; y++)
	{
		dest[z] = src[z];
	}
	
	return (dest);
}
