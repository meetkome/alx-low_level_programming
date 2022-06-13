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

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; z < y; z++)
	{
		dest[z] = src[z];
	}
	dest[1] = '\0';
	return (dest);
}
